module AFA(
    input x1,
    input x2,
    input x3,
    output sum,
    output carry
);

    assign sum = ~( x1 | (x2 & x3) ) ;
    assign carry = x1 | (x2 & x3) ;


endmodule



