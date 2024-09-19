module only_carry_compressor_2to1(
    input x1,
    input x2,
    output carry
);

    assign carry = x1 | x2;
endmodule


/************************************************************************************/  
module only_carry_compressor_3to1(
    input x1,
    input x2,
    input x3,
    output carry
);

    assign carry = x1 | x2 | x3;
endmodule

/************************************************************************************/  

module only_carry_compressor_4to1(
    input x1,
    input x2,
    input x3,
    input x4,
    output carry
);

    assign carry = x1 | x2 | x3 | x4;
endmodule
