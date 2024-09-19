module only_dual_carry_compressor(
    input x1,
    input x2,
    input x3,
    input x4,
    output C1,
    output C2
);

    assign C1 = x1 | x2;
    assign C2 = x3 & x4;
endmodule
