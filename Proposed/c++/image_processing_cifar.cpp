#include "Voptimized_approximate_multiplier_8x8.h"
#include "verilated.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdint>
#include <random>
#include <opencv2/quality.hpp>
#include <iomanip>
#include <numeric>

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
    // 对于彩色图像，返回所有通道的平均值
    return (ssim[0] + ssim[1] + ssim[2]) / 3.0;
}


// 添加新函数计算 PSNR 和 SSIM 的乘积
double calculate_psnr_ssim_product(double psnr, double ssim) {
    return psnr * ssim;
}


std::vector<cv::Mat> read_cifar10(const std::string& filename, int num_images = 10000, bool print_rgb = false) {
    std::vector<cv::Mat> images;
    std::ifstream file(filename, std::ios::binary);
    
    if (!file) {
        std::cerr << "无法打开文件：" << filename << std::endl;
        return images;
    }

    const int LABEL_SIZE = 1;
    const int IMAGE_SIZE = 32 * 32 * 3;
    const int RECORD_SIZE = LABEL_SIZE + IMAGE_SIZE;

    for (int i = 0; i < num_images; ++i) {
        char label;
        std::vector<unsigned char> buffer(IMAGE_SIZE);

        // 读取整个记录
        file.read(&label, LABEL_SIZE);
        file.read(reinterpret_cast<char*>(buffer.data()), IMAGE_SIZE);

        if (file.gcount() != IMAGE_SIZE) {
            std::cerr << "读取错误或文件结束，在第 " << i << " 张图像" << std::endl;
            break;
        }

        // 只在第一个批次的第一张图像时打印RGB值
        if (print_rgb && i == 0) {
            std::cout << "第一张图像的第一个像素的原始 RGB 值：" << std::endl;
            std::cout << "R: " << (int)buffer[0] << std::endl;
            std::cout << "G: " << (int)buffer[1024] << std::endl;
            std::cout << "B: " << (int)buffer[2048] << std::endl;
        }

        cv::Mat image(32, 32, CV_8UC3);
        for (int r = 0; r < 32; ++r) {
            for (int c = 0; c < 32; ++c) {
                image.at<cv::Vec3b>(r, c)[2] = buffer[r * 32 + c];              // Red
                image.at<cv::Vec3b>(r, c)[1] = buffer[1024 + r * 32 + c];       // Green
                image.at<cv::Vec3b>(r, c)[0] = buffer[2048 + r * 32 + c];       // Blue
            }
        }

        images.push_back(image);
    }

    return images;
}

// 修改 read_cifar10 函数以读取多个文件
std::vector<cv::Mat> read_cifar10_all(const std::string& directory) {
    std::vector<cv::Mat> all_images;
    std::vector<std::string> batch_files = {
        "data_batch_1.bin", "data_batch_2.bin", "data_batch_3.bin", 
        "data_batch_4.bin", "data_batch_5.bin", "test_batch.bin"
    };

    bool first_batch = true;
    for (const auto& batch_file : batch_files) {
        std::string full_path = directory + "/" + batch_file;
        std::vector<cv::Mat> batch_images = read_cifar10(full_path, 10000, first_batch);
        all_images.insert(all_images.end(), batch_images.begin(), batch_images.end());
        first_batch = false;
    }

    return all_images;
}

int main() {
    std::string cifar10_directory = "../../cifar-10-batches-bin";
    std::vector<cv::Mat> images = read_cifar10_all(cifar10_directory);

    if (images.empty()) {
        std::cerr << "错误：无法读取CIFAR-10数据" << std::endl;
        return -1;
    }

    std::cout << "总共读取了 " << images.size() << " 张CIFAR-10图片" << std::endl;

    // 只输出第一张图像的RGB和BGR值
    if (!images.empty()) {
        cv::Vec3b first_pixel = images[0].at<cv::Vec3b>(0, 0);
        std::cout << "第一张图像转换后的第一个像素的 BGR 值：" << std::endl;
        std::cout << "B: " << (int)first_pixel[0] << std::endl;
        std::cout << "G: " << (int)first_pixel[1] << std::endl;
        std::cout << "R: " << (int)first_pixel[2] << std::endl;
    }

    std::random_device rd;
    std::mt19937 gen(rd());

    const int NUM_RUNS = 5;  // 运行次数
    int num_tests = images.size();
    
    std::vector<double> run_psnr(NUM_RUNS), run_ssim(NUM_RUNS), run_product(NUM_RUNS);

    for (int run = 0; run < NUM_RUNS; ++run) {
        double total_psnr = 0, total_ssim = 0, total_product = 0;

        for (int i = 0; i < num_tests; ++i) {
            int j = i;
            while (j == i) {
                j = gen() % images.size();
            }
            
            cv::Mat img1 = images[i];
            cv::Mat img2 = images[j];

            cv::Mat result_approx = blend_images(img1, img2, true);
            cv::Mat result_exact = blend_images(img1, img2, false);

            double psnr = calculatePSNR(result_exact, result_approx);
            double ssim = calculateSSIM(result_exact, result_approx);
            double product = calculate_psnr_ssim_product(psnr, ssim);

            total_psnr += psnr;
            total_ssim += ssim;
            total_product += product;

            if ((i + 1) % 10000 == 0 || i == num_tests - 1) {
                std::cout << "运行 #" << run + 1 << " 完成测试 #" << i + 1 << " / " << num_tests << std::endl;
            }
        }

        run_psnr[run] = total_psnr / num_tests;
        run_ssim[run] = total_ssim / num_tests;
        run_product[run] = total_product / num_tests;

        std::cout << "运行 #" << run + 1 << " 完成" << std::endl;
    }

    // 计算所有运行的平均值
    double avg_psnr = std::accumulate(run_psnr.begin(), run_psnr.end(), 0.0) / NUM_RUNS;
    double avg_ssim = std::accumulate(run_ssim.begin(), run_ssim.end(), 0.0) / NUM_RUNS;
    double avg_product = std::accumulate(run_product.begin(), run_product.end(), 0.0) / NUM_RUNS;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "最终平均结果（" << NUM_RUNS << "次运行，每次 " << num_tests << " 测试）：" << std::endl;
    std::cout << "平均PSNR：" << avg_psnr << " dB" << std::endl;
    std::cout << "平均SSIM：" << avg_ssim << std::endl;
    std::cout << "平均PSNR*SSIM：" << avg_product << std::endl;


    // 在程序结束时清理
    if (g_top != nullptr) {
        delete g_top;
    }

    return 0;
}



