module Esposito_compressor_3to2(
    input x1,
    input x2,
    input x3,
    output s1,
    output s2
);

    assign s1 = (x1 & x2) | x3;
    assign s2 = x1 | x2;
endmodule


/************************************************************************************/  
module Esposito_compressor_4to2(
    input x1,
    input x2,
    input x3,
    input x4,
    output s1,
    output s2
);

    assign s1 = (x1 & x2) | x3 | x4;
    assign s2 = (x3 & x4) | x1 | x2;
endmodule
