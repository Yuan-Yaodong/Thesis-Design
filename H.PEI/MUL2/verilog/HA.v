
module HA(
    input x1,
    input x2,
    output sum,
    output carry
);

    assign sum = x1 ^ x2;
    assign carry = x1 & x2;

endmodule

