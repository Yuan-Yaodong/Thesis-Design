#include "VMUL2.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <cstdint>
#include <filesystem>
#include <opencv2/quality.hpp>

namespace fs = std::filesystem;

// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

// 全局变量
VMUL2* g_top = nullptr;

// 懒加载初始化函数
void init_approx_mult() {
    if (g_top == nullptr) {
        g_top = new VMUL2;
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
                uint8_t blended_value = static_cast<uint8_t>(blended / 256);
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

cv::Mat read_image(const std::string& path) {
    cv::Mat img = cv::imread(path);
    if (img.empty()) {
        std::cerr << "错误：无法读取图像 " << path << std::endl;
    }
    return img;
}

int main() {
    std::string image_directory = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/image";
    
    // 指定要合成的图片对
    std::vector<std::pair<std::string, std::string>> image_pairs = {
        {"plane.jpg", "pepper.jpg"},
        {"plane.jpg", "lake.jpg"},
        {"mandrill.jpg", "splash.jpg"}
    };

    for (const auto& pair : image_pairs) {
        cv::Mat img1 = read_image(image_directory + "/" + pair.first);
        cv::Mat img2 = read_image(image_directory + "/" + pair.second);

        if (img1.empty() || img2.empty()) {
            continue;
        }

        // 确保两张图片尺寸相同
        if (img1.size() != img2.size()) {
            cv::resize(img2, img2, img1.size());
        }

        cv::Mat result_approx = blend_images(img1, img2, true);
        cv::Mat result_exact = blend_images(img1, img2, false);

        double psnr = calculatePSNR(result_exact, result_approx);
        double ssim = calculateSSIM(result_exact, result_approx);

        std::cout << "图像对 " << pair.first << " 和 " << pair.second << " 的结果：" << std::endl;
        std::cout << "PSNR：" << psnr << " dB" << std::endl;
        std::cout << "SSIM：" << ssim << std::endl;
        std::cout << std::endl;

        // 保存结果图像
        cv::imwrite(image_directory + "/result_approx_" + pair.first + pair.second, result_approx);
        cv::imwrite(image_directory + "/result_exact_" + pair.first+ pair.second, result_exact);
    }

    // 在程序结束时清理
    if (g_top != nullptr) {
        delete g_top;
    }

    return 0;
}