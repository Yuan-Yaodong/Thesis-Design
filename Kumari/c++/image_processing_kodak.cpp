#include "VKumari.h"
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

namespace fs = std::filesystem;

// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

// 全局变量
VKumari* g_top = nullptr;

// 懒加载初始化函数
void init_approx_mult() {
    if (g_top == nullptr) {
        g_top = new VKumari;
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

// 读取Kodak数据集,按文件名排序并按尺寸分组
std::map<cv::Size, std::vector<cv::Mat>, SizeComparator> read_kodak_dataset(const std::string& directory, std::vector<std::string>& image_paths) {
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

int main() {
    const int NUM_RUNS = 1;  // 运行次数
    std::string kodak_directory = "../../Kodak";
    std::vector<std::string> image_paths;
    std::map<cv::Size, std::vector<cv::Mat>, SizeComparator> images_by_size = read_kodak_dataset(kodak_directory, image_paths);

    if (images_by_size.empty()) {
        std::cerr << "错误：无法读取Kodak数据集" << std::endl;
        return -1;
    }

    int total_images = 0;
    for (const auto& pair : images_by_size) {
        total_images += pair.second.size();
    }
    std::cout << "总共读取了 " << total_images << " 张Kodak图片" << std::endl;

    std::vector<double> avg_psnrs(NUM_RUNS), avg_ssims(NUM_RUNS), avg_products(NUM_RUNS);

    std::random_device rd;
    std::mt19937 gen(rd());

    for (int run = 0; run < NUM_RUNS; ++run) {
        double total_psnr = 0, total_ssim = 0, total_product = 0;
        int total_test_count = 0;

        for (const auto& pair : images_by_size) {
            const auto& images = pair.second;
            int num_tests = images.size() * (images.size() - 1);

            // 输出当前处理组信息
            std::cout << "当前处理组：" << pair.first.width << "x" << pair.first.height << std::endl;

            double group_psnr = 0, group_ssim = 0, group_product = 0;
            int group_test_count = 0;

            for (size_t i = 0; i < images.size(); ++i) {
                for (size_t j = 0; j < images.size(); ++j) {
                    if (i != j) {  // 避免自己和自己比较
                        cv::Mat img1 = images[i];
                        cv::Mat img2 = images[j];

                        cv::Mat result_approx = blend_images(img1, img2, true);
                        cv::Mat result_exact = blend_images(img1, img2, false);

                        double psnr = calculatePSNR(result_exact, result_approx);
                        double ssim = calculateSSIM(result_exact, result_approx);
                        double product = calculate_psnr_ssim_product(psnr, ssim);

                        group_psnr += psnr;
                        group_ssim += ssim;
                        group_product += product;

                        ++group_test_count;
                        if (group_test_count % 10 == 0 || group_test_count == num_tests) {
                            std::cout << "运行 #" << run + 1 << " 完成测试 #" << group_test_count << " / " << num_tests << std::endl;
                        }
                    }
                }
            }

            total_psnr += group_psnr;
            total_ssim += group_ssim;
            total_product += group_product;
            total_test_count += group_test_count;
        }

        avg_psnrs[run] = total_psnr / total_test_count;
        avg_ssims[run] = total_ssim / total_test_count;
        avg_products[run] = total_product / total_test_count;

        std::cout << "运行 #" << run + 1 << " 完成" << std::endl;
    }

    // 计算5次运行的平均值
    double final_avg_psnr = std::accumulate(avg_psnrs.begin(), avg_psnrs.end(), 0.0) / NUM_RUNS;
    double final_avg_ssim = std::accumulate(avg_ssims.begin(), avg_ssims.end(), 0.0) / NUM_RUNS;
    double final_avg_product = std::accumulate(avg_products.begin(), avg_products.end(), 0.0) / NUM_RUNS;

    std::cout << "最终平均结果（" << NUM_RUNS << " 次运行）：" << std::endl;
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