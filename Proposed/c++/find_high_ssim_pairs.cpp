#include "Voptimized_approximate_multiplier_8x8.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <random>
#include <opencv2/quality.hpp>

namespace fs = std::filesystem;

// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

// 全局变量
Voptimized_approximate_multiplier_8x8* g_top = nullptr;

// 懒加载初始化函数
void init_approx_mult() {
    if (g_top == nullptr) {
        g_top = new Voptimized_approximate_multiplier_8x8;
    }
}

// approx_mult函数
uint16_t approx_mult(uint8_t a, uint8_t b) {
    init_approx_mult();
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
                uint8_t blended_value = static_cast<uint8_t>(std::round(std::sqrt(blended)));
                result.at<cv::Vec3b>(i, j)[c] = blended_value;
            }
        }
    }
    return result;
}

double calculateSSIM(const cv::Mat& img1, const cv::Mat& img2) {
    cv::Scalar ssim = cv::quality::QualitySSIM::compute(img1, img2, cv::noArray());
    return (ssim[0] + ssim[1] + ssim[2]) / 3.0;
}

struct ImagePair {
    std::string img1_path;
    std::string img2_path;
    double ssim;
};

int main() {
    std::string div2k_directory = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K";
    std::vector<std::string> image_paths;

    for (const auto & entry : fs::directory_iterator(div2k_directory)) {
        if (entry.path().extension() == ".png") {
            image_paths.push_back(entry.path().string());
        }
    }
    std::sort(image_paths.begin(), image_paths.end());

    std::vector<ImagePair> high_ssim_pairs;
    std::random_device rd;
    std::mt19937 gen(rd());

    for (size_t i = 0; i < image_paths.size(); ++i) {
        cv::Mat img1 = cv::imread(image_paths[i]);
        if (img1.empty()) {
            std::cerr << "错误：无法读取图像 " << image_paths[i] << std::endl;
            continue;
        }

        std::vector<size_t> indices(image_paths.size());
        std::iota(indices.begin(), indices.end(), 0);
        std::shuffle(indices.begin(), indices.end(), gen);

        bool found_pair = false;
        for (size_t j : indices) {
            if (i == j) continue;  // 跳过自身

            cv::Mat img2 = cv::imread(image_paths[j]);
            if (img2.empty()) {
                std::cerr << "错误：无法读取图像 " << image_paths[j] << std::endl;
                continue;
            }

            cv::Mat result_approx = blend_images(img1, img2, true);
            cv::Mat result_exact = blend_images(img1, img2, false);

            double ssim = calculateSSIM(result_exact, result_approx);

            if (ssim > 0.99) {
                high_ssim_pairs.push_back({image_paths[i], image_paths[j], ssim});
                found_pair = true;
                break;
            }
        }

        if (!found_pair) {
            std::cout << "警告：图像 " << image_paths[i] << " 未找到SSIM > 0.99的配对" << std::endl;
        }

        std::cout << "处理完成图像 " << i + 1 << " / " << image_paths.size() << std::endl;
    }

    std::sort(high_ssim_pairs.begin(), high_ssim_pairs.end(), 
              [](const ImagePair& a, const ImagePair& b) { return a.ssim > b.ssim; });

    std::cout << "SSIM > 0.99 的图像对：" << std::endl;
    for (const auto& pair : high_ssim_pairs) {
        std::cout << pair.img1_path << " - " << pair.img2_path << ": SSIM = " << pair.ssim << std::endl;
    }

    std::ofstream outfile(div2k_directory + "/high_ssim_pairs.txt");
    for (const auto& pair : high_ssim_pairs) {
        outfile << pair.img1_path << " " << pair.img2_path << " " << pair.ssim << std::endl;
    }
    outfile.close();

    std::cout << "结果已保存到 " << div2k_directory << "/high_ssim_pairs.txt" << std::endl;

    if (g_top != nullptr) {
        delete g_top;
    }

    return 0;
}