#include "Vmy_approximate_multiplier_8x8.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmy_approximate_multiplier_8x8* top = new Vmy_approximate_multiplier_8x8;

    // Variables for error calculation
    int64_t total_error = 0;
    int64_t total_error_distance = 0;
    long double total_NMED = 0.0L;
    long double total_RED = 0.0L; // Total Relative Error Distance
    int max_ED = 0;
    int num_tests = 0;

    // Test all 65536 combinations
    for (int a = 0; a <= 255; a++) {
        for (int b = 0; b <= 255; b++) {
            top->a = a;
            top->b = b;
            top->eval();

            int Exact = a * b;
            int final_sum = top->final_sum;

            // Calculate error
            int error = final_sum - Exact;
            int error_distance = std::abs(error);
            long double current_NMED = static_cast<long double>(error_distance) / (65536.0L * 65025.0L);

            // Calculate RED
            long double current_RED;
            if (Exact != 0) {
                current_RED = static_cast<long double>(error_distance) / Exact; // Calculate relative error distance
            } else {
                current_RED = 0.0; // If Exact is 0 and error is not 0, set RED to 0
            }

            // Update statistics
            total_error += error;
            total_error_distance += error_distance;
            total_NMED += current_NMED;
            total_RED += current_RED; // Accumulate total RED
            if (error_distance > max_ED) max_ED = error_distance;
            num_tests++;

            // Optional: Print results for each combination
            //std::cout << "a=" << a << ", b=" << b << ", final_sum=" << final_sum << ", Exact=" << Exact << ", error=" << error << ", RED=" << current_RED << std::endl;
        }
    }

    // Calculate mean error
    double mean_error = static_cast<double>(total_error) / num_tests;
    long double MRED = total_RED / 65025.0; // Calculate MRED

    // Print final statistics
    std::cout << "                                " << std::endl;
    std::cout << "Testing completed." << std::endl;
    std::cout << "Total number of tests: " << num_tests << std::endl;
    std::cout << "Maximum error distance: " << max_ED << std::endl;
    std::cout << std::fixed << std::setprecision(9);
    std::cout << "Mean error: " << mean_error << std::endl;
    std::cout << "NMED: " << total_NMED << std::endl;
    std::cout << "NMED (scientific): " << std::scientific << std::setprecision(5) << total_NMED << std::endl;
    std::cout << "Total RED: " << total_RED << std::endl;
    std::cout << "MRED: " << MRED << std::endl; // Output MRED
    std::cout << "MRED (scientific): " << std::scientific << std::setprecision(5) << MRED << std::endl;

    delete top;
    return 0;
}