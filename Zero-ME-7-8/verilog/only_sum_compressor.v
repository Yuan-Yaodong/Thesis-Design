module only_sum_compressor(
    input x1,
    input x2,
    input x3,
    input x4,
    output sum
);

    assign sum = x1 | x2 | x3 | x4;

endmodule
