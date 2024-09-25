module exact_4to2_compressor(
    input x1,
    input x2,
    input x3,
    input x4,
    input cin,
    output sum,
    output carry,
    output cout
);

    assign cout = x1 & x2 | x3 & (x1 | x2);
    assign carry = ((x1 ^ x2 ^ x3) & x4) | (cin & ((x1 ^ x2 ^ x3) | x4));
    assign sum = (x1 ^ x2 ^ x3) ^ x4 ^ cin;




    // First stage: 3:2 compressor (full adder)
    //assign s1 = x1 ^ x2 ^ x3;
    //assign c1 = (x1 & x2) | (x2 & x3) | (x3 & x1);

    // Second stage: 3:2 compressor (full adder)
    //assign sum = s1 ^ x4 ^ cin;
    //assign carry = (s1 & x4) | (x4 & cin) | (cin & s1);

    // Generate carry
    //assign cout = c1;

endmodule
