#include "VMUL4.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <cmath>
#include <cstdint>
#include <vector>
#include <string>
#include <map>
#include <opencv2/quality.hpp>


// 主选 female x house


// 添加 sc_time_stamp() 函数定义
double sc_time_stamp() { return 0; }

uint16_t approx_mult(uint8_t a, uint8_t b) {
    static VMUL4* top = new VMUL4;
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

double calculatePSNR(const cv::Mat& img1, const cv::Mat& img2) {
    if (img1.empty() || img2.empty() || img1.size() != img2.size() || img1.type() != img2.type()) {
        std::cerr << "Error: Invalid input images" << std::endl;
        return -1;
    }

    cv::Mat diff;
    cv::absdiff(img1, img2, diff);

    double mseBlue = cv::mean((diff.channels() == 3 ? diff.col(0).colRange(0, 1) : diff).mul(diff.channels() == 3 ? diff.col(0).colRange(0, 1) : diff))[0];
    double mseGreen = cv::mean((diff.channels() == 3 ? diff.col(1).colRange(0, 1) : diff).mul(diff.channels() == 3 ? diff.col(1).colRange(0, 1) : diff))[0];
    double mseRed = cv::mean((diff.channels() == 3 ? diff.col(2).colRange(0, 1) : diff).mul(diff.channels() == 3 ? diff.col(2).colRange(0, 1) : diff))[0];

    double mse = (mseBlue + mseGreen + mseRed) / 3.0;

    if (mse <= 0) {
        return std::numeric_limits<double>::infinity();
    }

    double maxPixelValue = 0;
    cv::minMaxLoc(img1, nullptr, &maxPixelValue);
    cv::minMaxLoc(img2, nullptr, &maxPixelValue);

    return 10 * log10(maxPixelValue * maxPixelValue / mse);
}


///=================

// double calculate_ssim(const cv::Mat& img1, const cv::Mat& img2) {
//     const double C1 = 6.5025, C2 = 58.5225;
//     cv::Mat I1, I2;
//     img1.convertTo(I1, CV_32F);
//     img2.convertTo(I2, CV_32F);
    
//     cv::Mat I1_2 = I1.mul(I1);
//     cv::Mat I2_2 = I2.mul(I2);
//     cv::Mat I1_I2 = I1.mul(I2);
    
//     cv::Mat mu1, mu2;
//     cv::GaussianBlur(I1, mu1, cv::Size(11, 11), 1.5);
//     cv::GaussianBlur(I2, mu2, cv::Size(11, 11), 1.5);
    
//     cv::Mat mu1_2 = mu1.mul(mu1);
//     cv::Mat mu2_2 = mu2.mul(mu2);
//     cv::Mat mu1_mu2 = mu1.mul(mu2);
    
//     cv::Mat sigma1_2, sigma2_2, sigma12;
//     cv::GaussianBlur(I1_2, sigma1_2, cv::Size(11, 11), 1.5);
//     sigma1_2 -= mu1_2;
    
//     cv::GaussianBlur(I2_2, sigma2_2, cv::Size(11, 11), 1.5);
//     sigma2_2 -= mu2_2;
    
//     cv::GaussianBlur(I1_I2, sigma12, cv::Size(11, 11), 1.5);
//     sigma12 -= mu1_mu2;
    
//     cv::Mat t1, t2, t3;
//     t1 = 2 * mu1_mu2 + C1;
//     t2 = 2 * sigma12 + C2;
//     t3 = t1.mul(t2);
    
//     t1 = mu1_2 + mu2_2 + C1;
//     t2 = sigma1_2 + sigma2_2 + C2;
//     t1 = t1.mul(t2);
    
//     cv::Mat ssim_map;
//     cv::divide(t3, t1, ssim_map);
//     return cv::mean(ssim_map)[0];
// }


double calculateSSIM(const cv::Mat& img1, const cv::Mat& img2) {
    cv::Scalar ssim = cv::quality::QualitySSIM::compute(img1, img2, cv::noArray());
    // 对于彩色图像，返回所有通道的平均值
    return (ssim[0] + ssim[1] + ssim[2]) / 3.0;
}


// 为 cv::Size 定义比较函数
struct SizeCompare {
    bool operator()(const cv::Size& lhs, const cv::Size& rhs) const {
        return lhs.width < rhs.width || (lhs.width == rhs.width && lhs.height < rhs.height);
    }
};

// 添加新函数计算 PSNR 和 SSIM 的乘积
double calculate_psnr_ssim_product(double psnr, double ssim) {
    return psnr * ssim;
}


// 遍历image目录下的所有图像，逐个对比，找到各自最好的结果。
// int main() {
//     std::string image_dir = "../../images/";
//     std::vector<cv::String> image_files;
//     cv::glob(image_dir + "*.jpg", image_files);

//     if (image_files.size() < 2) {
//         std::cerr << "Error: Not enough images in the directory" << std::endl;
//         return -1;
//     }

//     // 使用 map 来存储不同尺寸的最佳结果
//     std::map<cv::Size, std::pair<double, std::string>, SizeCompare> best_psnr;
//     std::map<cv::Size, std::pair<double, std::string>, SizeCompare> best_ssim;
//     std::map<cv::Size, std::pair<double, std::string>, SizeCompare> best_product;

//     for (size_t i = 0; i < image_files.size(); ++i) {
//         cv::Mat img1 = cv::imread(image_files[i]);
//         if (img1.empty()) {
//             std::cerr << "Error loading image: " << image_files[i] << std::endl;
//             continue;
//         }

//         for (size_t j = i + 1; j < image_files.size(); ++j) {
//             cv::Mat img2 = cv::imread(image_files[j]);
//             if (img2.empty()) {
//                 std::cerr << "Error loading image: " << image_files[j] << std::endl;
//                 continue;
//             }

//             // 只处理相同尺寸的图片
//             if (img1.size() != img2.size()) {
//                 std::cout << "Skipping images with different sizes: " << image_files[i] << " and " << image_files[j] << std::endl;
//                 continue;
//             }

//             float alpha = 0.5;
//             cv::Mat result_approx = blend_images(img1, img2, alpha, true);
//             cv::Mat result_exact = blend_images(img1, img2, alpha, false);

//             double psnr = calculatePSNR(result_exact, result_approx);
//             double ssim = calculateSSIM(result_exact, result_approx);
//             double product = calculate_psnr_ssim_product(psnr, ssim);

//             // 更新该尺寸的最佳 PSNR
//             if (best_psnr.find(img1.size()) == best_psnr.end() || psnr > best_psnr[img1.size()].first) {
//                 best_psnr[img1.size()] = {psnr, image_files[i] + " and " + image_files[j]};
//             }

//             // 更新该尺寸的最佳 SSIM
//             if (best_ssim.find(img1.size()) == best_ssim.end() || ssim > best_ssim[img1.size()].first) {
//                 best_ssim[img1.size()] = {ssim, image_files[i] + " and " + image_files[j]};
//             }

//             // 更新该尺寸的最佳乘积
//             if (best_product.find(img1.size()) == best_product.end() || product > best_product[img1.size()].first) {
//                 best_product[img1.size()] = {product, image_files[i] + " and " + image_files[j]};
//             }

//             std::cout << "Images: " << image_files[i] << " and " << image_files[j] << std::endl;
//             std::cout << "Size: " << img1.size() << std::endl;
//             std::cout << "PSNR: " << psnr << " dB" << std::endl;
//             std::cout << "SSIM: " << ssim << std::endl;
//             std::cout << "PSNR*SSIM: " << product << std::endl;
//             std::cout << "------------------------" << std::endl;
//         }
//     }

//     // 输出每种尺寸的最佳结果
//     for (const auto& entry : best_psnr) {
//         std::cout << "Size: " << entry.first << std::endl;
//         std::cout << "Best PSNR: " << entry.second.first << " dB, Images: " << entry.second.second << std::endl;
//         std::cout << "Best SSIM: " << best_ssim[entry.first].first << ", Images: " << best_ssim[entry.first].second << std::endl;
//         std::cout << "Best PSNR*SSIM: " << best_product[entry.first].first << ", Images: " << best_product[entry.first].second << std::endl;
//         std::cout << "------------------------" << std::endl;
//     }

//     return 0;
// }

int main() {
    std::string image_dir = "../../../images/";
    std::string female_image = image_dir + "female.jpg";
    std::string house_image = image_dir + "house.jpg";

    cv::Mat img1 = cv::imread(female_image);
    cv::Mat img2 = cv::imread(house_image);

    if (img1.empty() || img2.empty()) {
        std::cerr << "Error: Unable to load one or both images" << std::endl;
        return -1;
    }

    if (img1.size() != img2.size()) {
        std::cerr << "Error: Images have different sizes" << std::endl;
        return -1;
    }

    float alpha = 0.5;
    cv::Mat result_approx = blend_images(img1, img2, alpha, true);
    cv::Mat result_exact = blend_images(img1, img2, alpha, false);

    double psnr = calculatePSNR(result_exact, result_approx);
    double ssim = calculateSSIM(result_exact, result_approx);
    double product = calculate_psnr_ssim_product(psnr, ssim);

    std::cout << "Images: female.jpg and house.jpg" << std::endl;
    std::cout << "Size: " << img1.size() << std::endl;
    std::cout << "PSNR: " << psnr << " dB" << std::endl;
    std::cout << "SSIM: " << ssim << std::endl;
    std::cout << "PSNR*SSIM: " << product << std::endl;

    // 保存结果图像
    cv::imwrite(image_dir + "result_approx.jpg", result_approx);
    cv::imwrite(image_dir + "result_exact.jpg", result_exact);

    return 0;
}


