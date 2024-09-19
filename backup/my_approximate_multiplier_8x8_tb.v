`timescale 1ns / 1ps

module my_approximate_multiplier_8x8_tb;

    // Inputs
    reg [7:0] a;
    reg [7:0] b;

    // Outputs
    wire [15:0] final_sum;
    wire [15:0] Exact;
    assign Exact = a * b;

    // Instantiate the Unit Under Test (UUT)
    my_approximate_multiplier_8x8 uut (
        .a(a), 
        .b(b), 
        .final_sum(final_sum)
    );

    // Variables for error calculation
    integer total_error;
    integer total_error_distance;
    real total_NMED;
    real total_RED; // Total Relative Error Distance
    integer max_ED;
    real mean_error;
    real NMED;
    integer num_tests;

    // Additional variables for loop calculations
    integer error;
    integer error_distance;
    real current_NMED;
    real current_RED;

    initial begin
        // Initialize variables
        a = 0;
        b = 0;
        total_error = 0;
        total_error_distance = 0;
        total_NMED = 0;
        total_RED = 0; // Initialize total RED
        max_ED = 0;
        mean_error = 0;
        num_tests = 0;

        // Wait 100 ns for global reset to finish
        #100;

        // Test all 65536 combinations
        for (a = 0; a <= 255; a = a + 1) begin
            for (b = 0; b <= 255; b = b + 1) begin
                #10; // Wait for the result to stabilize
                
                // Calculate error
                error = final_sum - Exact; // No need for $signed() since both are positive
                error_distance = (final_sum > Exact) ? (final_sum - Exact) : (Exact - final_sum);
                current_NMED = error_distance * 1.0 / (65536 * 65025); // Normalized Mean Error Distance
                
                // Calculate RED
                if (Exact != 0) begin
                    current_RED = error_distance * 1.0 / Exact; // Calculate relative error distance
                end else begin
                    current_RED = 0;  // If Exact is 0, set RED to 0
                end
                
                // Update statistics
                total_error = total_error + error;
                total_error_distance = total_error_distance + error_distance;
                total_NMED = total_NMED + current_NMED;
                total_RED = total_RED + current_RED; // Accumulate total RED
                if (error_distance > max_ED) max_ED = error_distance;
                num_tests = num_tests + 1;
            end
        end

        // Calculate mean error
        mean_error = total_error * 1.0 / num_tests;
        mean_RED = total_RED * 1.0 / 65025.0;
        NMED = total_NMED;

        // Print final statistics
        $display("Testing completed.");
        $display("Total number of tests: %d", num_tests);
        $display("Maximum error distance: %d", max_ED);
        $display("Mean error: %f", mean_error);
        $display("NMED: %.9f", NMED);
        $display("NMED (scientific): %.5e", NMED);
        $display("Total RED: %.9f", total_RED);
        $display("MRED: %.9f", mean_RED); // Calculate and display MRED
        $display("MRED (scientific): %.5e", mean_RED);
        $finish;
    end

endmodule
