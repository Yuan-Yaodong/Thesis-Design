#include "Voptimized_approximate_multiplier_8x8.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include <cstdint>

// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

uint16_t approx_mult(uint8_t a, uint8_t b) {
    static Voptimized_approximate_multiplier_8x8* top = new Voptimized_approximate_multiplier_8x8;
    top->a = a;
    top->b = b;
    top->eval();
    return top->final_sum;
}

cv::Mat blend_images(const cv::Mat& img1, const cv::Mat& img2, float alpha, bool use_approx) {
    cv::Mat result = cv::Mat::zeros(img1.size(), CV_8UC3);
    uint8_t alpha_int = static_cast<uint8_t>(alpha * 255);

    for (int i = 0; i < img1.rows; ++i) {
        for (int j = 0; j < img1.cols; ++j) {
            for (int c = 0; c < 3; ++c) {
                uint16_t blend1, blend2;
                if (use_approx) {
                    blend1 = approx_mult(img1.at<cv::Vec3b>(i, j)[c], alpha_int);
                    blend2 = approx_mult(img2.at<cv::Vec3b>(i, j)[c], 255 - alpha_int);
                } else {
                    // 使用精确乘法
                    blend1 = static_cast<uint16_t>(img1.at<cv::Vec3b>(i, j)[c]) * alpha_int;
                    blend2 = static_cast<uint16_t>(img2.at<cv::Vec3b>(i, j)[c]) * (255 - alpha_int);
                }
                result.at<cv::Vec3b>(i, j)[c] = static_cast<uint8_t>((blend1 + blend2) / 255);
            }
        }
    }
    return result;
}

double calculate_psnr(const cv::Mat& img1, const cv::Mat& img2) {
    cv::Mat diff;
    cv::absdiff(img1, img2, diff);
    diff.convertTo(diff, CV_32F);
    diff = diff.mul(diff);
    
    double mse = cv::mean(diff)[0];
    if (mse <= 1e-10) {
        return 100;
    }
    return 10.0 * log10((255 * 255) / mse);
}

double calculate_ssim(const cv::Mat& img1, const cv::Mat& img2) {
    const double C1 = 6.5025, C2 = 58.5225;
    cv::Mat I1, I2;
    img1.convertTo(I1, CV_32F);
    img2.convertTo(I2, CV_32F);
    
    cv::Mat I1_2 = I1.mul(I1);
    cv::Mat I2_2 = I2.mul(I2);
    cv::Mat I1_I2 = I1.mul(I2);
    
    cv::Mat mu1, mu2;
    cv::GaussianBlur(I1, mu1, cv::Size(11, 11), 1.5);
    cv::GaussianBlur(I2, mu2, cv::Size(11, 11), 1.5);
    
    cv::Mat mu1_2 = mu1.mul(mu1);
    cv::Mat mu2_2 = mu2.mul(mu2);
    cv::Mat mu1_mu2 = mu1.mul(mu2);
    
    cv::Mat sigma1_2, sigma2_2, sigma12;
    cv::GaussianBlur(I1_2, sigma1_2, cv::Size(11, 11), 1.5);
    sigma1_2 -= mu1_2;
    
    cv::GaussianBlur(I2_2, sigma2_2, cv::Size(11, 11), 1.5);
    sigma2_2 -= mu2_2;
    
    cv::GaussianBlur(I1_I2, sigma12, cv::Size(11, 11), 1.5);
    sigma12 -= mu1_mu2;
    
    cv::Mat t1, t2, t3;
    t1 = 2 * mu1_mu2 + C1;
    t2 = 2 * sigma12 + C2;
    t3 = t1.mul(t2);
    
    t1 = mu1_2 + mu2_2 + C1;
    t2 = sigma1_2 + sigma2_2 + C2;
    t1 = t1.mul(t2);
    
    cv::Mat ssim_map;
    cv::divide(t3, t1, ssim_map);
    return cv::mean(ssim_map)[0];
}

int main() {
    cv::Mat img1 = cv::imread("image1.jpg");
    cv::Mat img2 = cv::imread("image2.jpg");

    if (img1.empty() || img2.empty()) {
        std::cerr << "Error loading images" << std::endl;
        return -1;
    }

    // Resize img2 to match img1 size
    cv::resize(img2, img2, img1.size());

    float alpha = 0.5;
    cv::Mat result_approx = blend_images(img1, img2, alpha, true);
    cv::Mat result_exact = blend_images(img1, img2, alpha, false);

    double psnr = calculate_psnr(result_exact, result_approx);
    double ssim = calculate_ssim(result_exact, result_approx);

    std::cout << "PSNR: " << psnr << " dB" << std::endl;
    std::cout << "SSIM: " << ssim << std::endl;

    cv::imwrite("result_approx.jpg", result_approx);
    cv::imwrite("result_exact.jpg", result_exact);

    // 显示结果（可选）
   // cv::imshow("Approximate Result", result_approx);
   // cv::imshow("Exact Result", result_exact);
   // cv::waitKey(0);

    return 0;
}