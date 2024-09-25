#include "VMingtao_hybrid.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <random>
#include <filesystem>
#include <opencv2/quality.hpp>
#include <map>
#include <fstream>

namespace fs = std::filesystem;

// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

// 全局变量
VMingtao_hybrid* g_top = nullptr;

// 懒加载初始化函数
void init_approx_mult() {
    if (g_top == nullptr) {
        g_top = new VMingtao_hybrid;
    }
}

// 修改approx_mult函数
uint16_t approx_mult(uint8_t a, uint8_t b) {
    init_approx_mult();  // 确保对象已创建
    g_top->a = a;
    g_top->b = b;
    g_top->eval();
    return g_top->final_sum;
}

cv::Mat blend_images(const cv::Mat& img1, const cv::Mat& img2, bool use_approx) {
    cv::Mat result = cv::Mat::zeros(img1.size(), CV_8UC3);

    for (int i = 0; i < img1.rows; ++i) {
        for (int j = 0; j < img1.cols; ++j) {
            for (int c = 0; c < 3; ++c) {
                uint16_t blended;
                if (use_approx) {
                    blended = approx_mult(img1.at<cv::Vec3b>(i, j)[c], img2.at<cv::Vec3b>(i, j)[c]);
                } else {
                    blended = static_cast<uint16_t>(img1.at<cv::Vec3b>(i, j)[c]) * img2.at<cv::Vec3b>(i, j)[c];
                }
                // 计算几何平均
                uint8_t blended_value = static_cast<uint8_t>(std::round(std::sqrt(blended)));
                result.at<cv::Vec3b>(i, j)[c] = blended_value;
            }
        }
    }
    return result;
}

const double MAX_PIXEL_VALUE = 255.0;

double calculatePSNR(const cv::Mat& img1, const cv::Mat& img2) {
    cv::Mat diff;
    cv::absdiff(img1, img2, diff);

    double mseBlue = cv::mean(diff.col(0).mul(diff.col(0)))[0];
    double mseGreen = cv::mean(diff.col(1).mul(diff.col(1)))[0];
    double mseRed = cv::mean(diff.col(2).mul(diff.col(2)))[0];

    double psnrBlue = (mseBlue <= 1e-10) ? 100.0 : 10 * log10(MAX_PIXEL_VALUE * MAX_PIXEL_VALUE / mseBlue);
    double psnrGreen = (mseGreen <= 1e-10) ? 100.0 : 10 * log10(MAX_PIXEL_VALUE * MAX_PIXEL_VALUE / mseGreen);
    double psnrRed = (mseRed <= 1e-10) ? 100.0 : 10 * log10(MAX_PIXEL_VALUE * MAX_PIXEL_VALUE / mseRed);

    return (psnrBlue + psnrGreen + psnrRed) / 3.0;
}

double calculateSSIM(const cv::Mat& img1, const cv::Mat& img2) {
    cv::Scalar ssim = cv::quality::QualitySSIM::compute(img1, img2, cv::noArray());
    return (ssim[0] + ssim[1] + ssim[2]) / 3.0;
}

double calculate_psnr_ssim_product(double psnr, double ssim) {
    return psnr * ssim;
}

// 自定义比较函数
struct SizeComparator {
    bool operator()(const cv::Size& lhs, const cv::Size& rhs) const {
        return std::tie(lhs.width, lhs.height) < std::tie(rhs.width, rhs.height);
    }
};

// 读取DIV2K数据集,按文件名排序并按尺寸分组
std::map<cv::Size, std::vector<cv::Mat>, SizeComparator> read_div2k_dataset(const std::string& directory, std::vector<std::string>& image_paths) {
    for (const auto & entry : fs::directory_iterator(directory)) {
        if (entry.path().extension() == ".png") {
            image_paths.push_back(entry.path().string());
        }
    }
    std::sort(image_paths.begin(), image_paths.end());

    std::map<cv::Size, std::vector<cv::Mat>, SizeComparator> images_by_size;
    for (const auto& path : image_paths) {
        cv::Mat img = cv::imread(path);
        if (!img.empty()) {
            images_by_size[img.size()].push_back(img);
        }
    }
    return images_by_size;
}

// 新增：读取或创建配对文件
std::map<std::string, std::string> read_or_create_pairings(const std::string& directory, const std::vector<std::string>& image_paths) {
    // std::string pairing_file = directory + "/image_pairings.txt";
    std::string pairing_file = directory + "/high_ssim_pairs_cleaned.txt";
    std::map<std::string, std::string> pairings;

    if (fs::exists(pairing_file)) {
        std::ifstream file(pairing_file);
        std::string img1, img2;
        while (file >> img1 >> img2) {
            pairings[img1] = img2;
        }
    } else {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::vector<std::string> shuffled_paths = image_paths;
        std::shuffle(shuffled_paths.begin(), shuffled_paths.end(), gen);

        std::ofstream file(pairing_file);
        for (size_t i = 0; i < image_paths.size(); ++i) {
            size_t j = (i + 1) % image_paths.size(); // 确保不与自身配对
            pairings[image_paths[i]] = shuffled_paths[j];
            file << image_paths[i] << " " << shuffled_paths[j] << std::endl;
        }
    }

    return pairings;
}

int main() {
    std::string div2k_directory = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K";
    
    std::vector<std::string> image_paths;
    std::map<cv::Size, std::vector<cv::Mat>, SizeComparator> images_by_size = read_div2k_dataset(div2k_directory, image_paths);

    if (images_by_size.empty()) {
        std::cerr << "错误：无法读取DIV2K数据集" << std::endl;
        return -1;
    }

    // 读取或创建配对
    std::map<std::string, std::string> pairings = read_or_create_pairings(div2k_directory, image_paths);

    int total_images = 0;
    std::cout << "各尺寸组中的图片数量：" << std::endl;
    for (const auto& pair : images_by_size) {
        int group_size = pair.second.size();
        total_images += group_size;
        std::cout << pair.first.width << "x" << pair.first.height << ": " << group_size << " 张图片" << std::endl;
    }
    std::cout << "总共读取了 " << total_images << " 张DIV2K图片" << std::endl;

    double total_psnr = 0, total_ssim = 0, total_product = 0;
    int total_test_count = 0;

    for (const auto& image_path : image_paths) {
        cv::Mat img1 = cv::imread(image_path);
        cv::Mat img2 = cv::imread(pairings[image_path]);

        if (img1.empty() || img2.empty()) {
            std::cerr << "错误：无法读取图像 " << image_path << " 或其配对" << std::endl;
            continue;
        }

        cv::Mat result_approx = blend_images(img1, img2, true);
        cv::Mat result_exact = blend_images(img1, img2, false);

        double psnr = calculatePSNR(result_exact, result_approx);
        double ssim = calculateSSIM(result_exact, result_approx);
        double product = calculate_psnr_ssim_product(psnr, ssim);

        total_psnr += psnr;
        total_ssim += ssim;
        total_product += product;

        ++total_test_count;
        if (total_test_count % 10 == 0 || total_test_count == total_images) {
            std::cout << "完成测试 #" << total_test_count << " / " << total_images << std::endl;
        }
    }

    double final_avg_psnr = total_psnr / total_test_count;
    double final_avg_ssim = total_ssim / total_test_count;
    double final_avg_product = total_product / total_test_count;

    std::cout << "最终平均结果：" << std::endl;
    std::cout << "平均PSNR：" << final_avg_psnr << " dB" << std::endl;
    std::cout << "平均SSIM：" << final_avg_ssim << std::endl;
    std::cout << "平均PSNR*SSIM：" << final_avg_product << std::endl;

    // 输出图像信息
    std::cout << "图像信息：" << std::endl;
    for (const auto& pair : images_by_size) {
        const auto& images = pair.second;
        for (size_t i = 0; i < std::min(size_t(1), images.size()); ++i) {
            std::cout << i + 1 << ". 图像 #" << i + 1
                      << " - 尺寸: " << images[i].size()
                      << " 类型: " << images[i].type()
                      << " 深度: " << images[i].depth()
                      << " 通道数: " << images[i].channels()
                      << std::endl;
        }
    }
    // 在程序结束时清理
    if (g_top != nullptr) {
        delete g_top;
    }

    return 0;
}