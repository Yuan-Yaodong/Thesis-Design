#include "VSabetzadeh.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <bitset>

void test_multiplier(VSabetzadeh* top, uint8_t a, uint8_t b) {
    top->a = a;
    top->b = b;
    top->eval();

    uint16_t exact_result = static_cast<uint16_t>(a) * static_cast<uint16_t>(b);
    uint16_t approx_result = top->final_sum;

    std::cout << "a = " << std::bitset<8>(a) << " (" << static_cast<int>(a) << ")"
              << ", b = " << std::bitset<8>(b) << " (" << static_cast<int>(b) << ")"
              << ", Exact = " << std::setw(5) << exact_result 
              << ", Approx = " << std::setw(5) << approx_result;

    if (exact_result == approx_result) {
        std::cout << " [CORRECT]" << std::endl;
    } else {
        int difference = static_cast<int>(approx_result) - static_cast<int>(exact_result);
        std::cout << " [ERROR] Difference: " << std::setw(4) << difference << std::endl;
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VSabetzadeh* top = new VSabetzadeh;

    // 在这里添加您想要测试的输入组合
    test_multiplier(top, 5, 7);
    test_multiplier(top, 10, 10);
    test_multiplier(top, 15, 16);
    test_multiplier(top, 20, 25);
    test_multiplier(top, 30, 40);
    test_multiplier(top, 50, 60);
    test_multiplier(top, 100, 100);
    test_multiplier(top, 127, 127);
    test_multiplier(top, 128, 128);
    test_multiplier(top, 200, 200);
    test_multiplier(top, 255, 255);
    test_multiplier(top, 254, 63);
    test_multiplier(top, 127, 247);


    // 如果您想测试特定的输入，可以在这里添加更多的测试用例
    // 例如：test_multiplier(top, 123, 45);

    delete top;
    return 0;
}