`include "./UCAC3.v"
`include "./exact_4to2_compressor.v"
`include "./FA.v"
`include "./HA.v"

module MUL4(
    input CLK,
    input [7:0] a,
    input [7:0] b,
    output [15:0] final_sum
);

    wire [7:0] pp0 ; // 8 bits
    wire [7:0] pp1 ; // 8 bits
    wire [7:0] pp2 ; // 8 bits
    wire [7:0] pp3 ; // 8 bits
    wire [7:0] pp4 ; // 8 bits
    wire [7:0] pp5 ; // 8 bits
    wire [7:0] pp6 ; // 8 bits
    wire [7:0] pp7 ; // 8 bits


    // Generate partial products
    // total 64 and gates 
    assign pp0 = {a[7] & b[0], a[6] & b[0], a[5] & b[0], a[4] & b[0], a[3] & b[0], a[2] & b[0], a[1] & b[0], a[0] & b[0]}; // 8 and gates 
    assign pp1 = {a[7] & b[1], a[6] & b[1], a[5] & b[1], a[4] & b[1], a[3] & b[1], a[2] & b[1], a[1] & b[1], a[0] & b[1]}; // 8 and gates
    assign pp2 = {a[7] & b[2], a[6] & b[2], a[5] & b[2], a[4] & b[2], a[3] & b[2], a[2] & b[2], a[1] & b[2], a[0] & b[2]}; // 8 and gates
    assign pp3 = {a[7] & b[3], a[6] & b[3], a[5] & b[3], a[4] & b[3], a[3] & b[3], a[2] & b[3], a[1] & b[3], a[0] & b[3]}; // 8 and gates
    assign pp4 = {a[7] & b[4], a[6] & b[4], a[5] & b[4], a[4] & b[4], a[3] & b[4], a[2] & b[4], a[1] & b[4], a[0] & b[4]}; // 8 and gates
    assign pp5 = {a[7] & b[5], a[6] & b[5], a[5] & b[5], a[4] & b[5], a[3] & b[5], a[2] & b[5], a[1] & b[5], a[0] & b[5]}; // 8 and gates
    assign pp6 = {a[7] & b[6], a[6] & b[6], a[5] & b[6], a[4] & b[6], a[3] & b[6], a[2] & b[6], a[1] & b[6], a[0] & b[6]}; // 8 and gates    
    assign pp7 = {a[7] & b[7], a[6] & b[7], a[5] & b[7], a[4] & b[7], a[3] & b[7], a[2] & b[7], a[1] & b[7], a[0] & b[7]}; // 8 and gates


    // Stage 1
    wire [14:0] stage1_pp0;
    wire [12:0] stage1_pp1;
    wire [4:0] stage1_pp2;
    wire [4:0] stage1_pp3;

assign stage1_pp0 [1:0] = { pp0[1], pp0[0]};
// assign stage1_pp3[0] = pp4[0];


HA u_HA_stage1_1(
	.x1    	( pp0[2]     ),
	.x2    	( pp1[1]     ),
	.sum   	( stage1_pp0[2]  ),
	.carry 	( stage1_pp1[2]  )
);


UCAC3 u_UCAC3_1(
	.x1  	( pp0[3]   ),
	.x2  	( pp1[2]   ),
	.x3  	( pp2[1]   ),
	.x4  	( pp3[0]   ),
	.sum 	( stage1_pp0[3]  )
);

UCAC3 u_UCAC3_2(
	.x1  	( pp0[4]   ),
	.x2  	( pp1[3]   ),
	.x3  	( pp2[2]   ),
	.x4  	( pp3[1]   ),
	.sum 	( stage1_pp0[4]  )
);

UCAC3 u_UCAC3_3(
	.x1  	( pp0[5]   ),
	.x2  	( pp1[4]   ),
	.x3  	( pp2[3]   ),
	.x4  	( pp3[2]   ),
	.sum 	( stage1_pp0[5]  )
);

UCAC3 u_UCAC3_4(
	.x1  	( pp0[6]   ),
	.x2  	( pp1[5]   ),
	.x3  	( pp2[4]   ),
	.x4  	( pp3[3]   ),
	.sum 	( stage1_pp0[6]  )
);


wire stage1_FA1_carry;
FA u_FA_stage1_1(
	.x1    	( pp4[2]     ),
	.x2    	( pp5[1]     ),
	.x3    	( pp6[0]     ),
	.sum   	( stage1_pp1[5]    ),
	.carry 	( stage1_FA1_carry  )
);



wire ECM_Carry = ( pp0[6] | pp1[5] ) |  ( pp2[4] | pp3[3] );

assign stage1_pp1[1:0] = { pp2[0], pp1[0] };
assign stage1_pp1[3] = pp4[0];
assign stage1_pp1[4] = pp4[1] | pp5[0];


// ==========Exact 4to2 compressor===========

wire exact_4to2_cout11;
exact_4to2_compressor u_exact_4to2_compressor_stage1_11(
    .x1    	( pp0[7]     ),
    .x2    	( pp1[6]     ),
    .x3    	( pp2[5]     ),
    .x4    	( pp3[4]     ),
    .cin   	( ECM_Carry    ),
    .sum   	( stage1_pp0[7]    ),
    .carry 	( stage1_pp0[8]  ),
    .cout  	( exact_4to2_cout11   )
);

wire exact_4to2_cout12;
exact_4to2_compressor u_exact_4to2_compressor_stage1_12(
    .x1    	( pp4[3]     ),
    .x2    	( pp5[2]     ),
    .x3    	( pp6[1]     ),
    .x4    	( pp7[0]     ),
    .cin   	( stage1_FA1_carry    ),
    .sum   	( stage1_pp1[6]    ),
    .carry 	( stage1_pp1[7]  ),
    .cout  	( exact_4to2_cout12   )
);

wire exact_4to2_cout21;
exact_4to2_compressor u_exact_4to2_compressor_stage1_21(
    .x1    	( pp1[7]     ),
    .x2    	( pp2[6]     ),
    .x3    	( pp3[5]     ),
    .x4    	( pp4[4]     ),
    .cin   	( exact_4to2_cout11    ),
    .sum   	( stage1_pp2[0]    ),
    .carry 	( stage1_pp0[9]  ),
    .cout  	( exact_4to2_cout21   )
);

wire exact_4to2_cout22;
exact_4to2_compressor u_exact_4to2_compressor_stage1_22(
    .x1    	( pp5[3]     ),
    .x2    	( pp6[2]     ),
    .x3    	( pp7[1]     ),
    .x4    	( 1'b0     ),
    .cin   	( exact_4to2_cout12    ),
    .sum   	( stage1_pp3[0]    ),
    .carry 	( stage1_pp1[8]  ),
    .cout  	( exact_4to2_cout22   )
);

wire exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage1_3(
    .x1    	( pp2[7]     ),
    .x2    	( pp3[6]     ),
    .x3    	( pp4[5]     ),
    .x4    	( pp5[4]     ),
    .cin   	( exact_4to2_cout21    ),
    .sum   	( stage1_pp2[1]    ),
    .carry 	( stage1_pp0[10]  ),
    .cout  	( exact_4to2_cout3   )
);


FA u_FA_stage1_2(
    .x1    	( pp6[3]     ),
    .x2    	( pp7[2]     ),
    .x3    	( exact_4to2_cout22     ),
    .sum   	( stage1_pp3[1]    ),
    .carry 	( stage1_pp1[9]  )
);


wire exact_4to2_cout4;
exact_4to2_compressor u_exact_4to2_compressor_stage1_4(
    .x1    	( pp3[7]     ),
    .x2    	( pp4[6]     ),
    .x3    	( pp5[5]     ),
    .x4    	( pp6[4]     ),
    .cin   	( exact_4to2_cout3    ),
    .sum   	( stage1_pp2[2]    ),
    .carry 	( stage1_pp0[11]  ),
    .cout  	( exact_4to2_cout4   )
);

FA u_FA_stage1_3(
    .x1    	( pp4[7]     ),
    .x2    	( pp5[6]     ),
    .x3    	( exact_4to2_cout4     ),
    .sum   	( stage1_pp1[10]    ),
    .carry 	( stage1_pp0[12]  )
);

assign stage1_pp0[14:13] = { pp7[7], pp6[7] };
assign stage1_pp1[12:11] = { pp7[6], pp5[7] };
assign stage1_pp2[4:3] = { pp6[6], pp6[5] };
assign stage1_pp3[4:2] = { pp7[5], pp7[4], pp7[3] } ;





// Stage 2

wire [6:0] stage2_pp0;
wire [6:0] stage2_pp1;

assign stage2_pp1 [0] = stage1_pp3 [0];


FA u_FA_stage2_1(
    .x1    	( stage1_pp0[8]     ),
    .x2    	( stage1_pp1[7]     ),
    .x3    	( stage1_pp2[0]     ),
    .sum   	( stage2_pp0[0]    ),
    .carry 	( stage2_pp0[1]  )
);



wire stage2_exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage2_1(
    .x1    	( stage1_pp0[9]     ),
    .x2    	( stage1_pp1[8]     ),
    .x3    	( stage1_pp2[1]     ),
    .x4    	( stage1_pp3[1]     ),
    .cin   	( 1'b0    ),
    .sum   	( stage2_pp1[1]    ),
    .carry 	( stage2_pp0[2]  ),
    .cout  	( stage2_exact_4to2_cout1   )
);

wire stage2_exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage2_2(
    .x1    	( stage1_pp0[10]     ),
    .x2    	( stage1_pp1[9]     ),
    .x3    	( stage1_pp2[2]     ),
    .x4    	( stage1_pp3[2]     ),
    .cin   	( stage2_exact_4to2_cout1    ),
    .sum   	( stage2_pp1[2]    ),
    .carry 	( stage2_pp0[3]  ),
    .cout  	( stage2_exact_4to2_cout2   )
);

wire stage2_exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage2_3(
    .x1    	( stage1_pp0[11]     ),
    .x2    	( stage1_pp1[10]     ),
    .x3    	( stage1_pp2[3]     ),
    .x4    	( stage1_pp3[3]     ),
    .cin   	( stage2_exact_4to2_cout2    ),
    .sum   	( stage2_pp1[3]    ),
    .carry 	( stage2_pp0[4]  ),
    .cout  	( stage2_exact_4to2_cout3   )
);

wire stage2_exact_4to2_cout4;
exact_4to2_compressor u_exact_4to2_compressor_stage2_4(
    .x1    	( stage1_pp0[12]     ),
    .x2    	( stage1_pp1[11]     ),
    .x3    	( stage1_pp2[4]     ),
    .x4    	( stage1_pp3[4]     ),
    .cin   	( stage2_exact_4to2_cout3    ),
    .sum   	( stage2_pp1[4]    ),
    .carry 	( stage2_pp0[5]  ),
    .cout  	( stage2_exact_4to2_cout4   )
);

FA u_FA_3(
    .x1    	( stage1_pp0[13]     ),
    .x2    	( stage1_pp1[12]     ),
    .x3    	( stage2_exact_4to2_cout4    ),
    .sum   	( stage2_pp1[5]    ),
    .carry 	( stage2_pp0[6]  )
);

assign stage2_pp1[6] = stage1_pp0[14];


// Stage 3
assign final_sum [0] = pp0[0];
// assign final_sum [5:0] = { stage2_pp0[0], 5'b00000 };


wire cout_HA_stage3_1;
HA u_HA_stage3_1(
    .x1    	( stage1_pp0[1]     ),
    .x2    	( stage1_pp1[0]     ),
    .sum   	( final_sum[1]    ),
    .carry 	( cout_HA_stage3_1  )
);

wire cout_FA_stage3_1;
    FA u_FA_stage3_1(
        .x1    	( stage1_pp0[2]     ),
        .x2    	( stage1_pp1[1]     ),
        .x3    	( cout_HA_stage3_1     ),
        .sum   	( final_sum[2]    ),
        .carry 	( cout_FA_stage3_1  )
    );

wire cout_FA_stage3_2;
    FA u_FA_stage3_2(
        .x1    	( stage1_pp0[3]     ),
        .x2    	( stage1_pp1[2]     ),
        .x3    	( cout_FA_stage3_1     ),
        .sum   	( final_sum[3]    ),
        .carry 	( cout_FA_stage3_2  )
    );

wire cout_FA_stage3_3;
    FA u_FA_stage3_3(
        .x1    	( stage1_pp0[4]     ),
        .x2    	( stage1_pp1[3]     ),
        .x3    	( cout_FA_stage3_2     ),
        .sum   	( final_sum[4]    ),
        .carry 	( cout_FA_stage3_3  )
    );

wire cout_FA_stage3_4;
    FA u_FA_stage3_4(
        .x1    	( stage1_pp0[5]     ),
        .x2    	( stage1_pp1[4]     ),
        .x3    	( cout_FA_stage3_3     ),
        .sum   	( final_sum[5]    ),
        .carry 	( cout_FA_stage3_4  )
    );

wire cout_FA_stage3_5;
    FA u_FA_stage3_5(
        .x1    	( stage1_pp0[6]     ),
        .x2    	( stage1_pp1[5]     ),
        .x3    	( cout_FA_stage3_4     ),
        .sum   	( final_sum[6]    ),
        .carry 	( cout_FA_stage3_5  )
    );

wire cout_FA_stage3_6;
    FA u_FA_stage3_6(
        .x1    	( stage1_pp0[7]     ),
        .x2    	( stage1_pp1[6]     ),
        .x3    	( cout_FA_stage3_5     ),
        .sum   	( final_sum[7]    ),
        .carry 	( cout_FA_stage3_6  )
    );



wire cout_FA_stage3_7;
    FA u_FA_stage3_7(
        .x1    	( stage2_pp0[0]     ),
        .x2    	( stage2_pp1[0]     ),
        .x3    	( cout_FA_stage3_6     ),
        .sum   	( final_sum[8]    ),
        .carry 	( cout_FA_stage3_7  )
    );

wire cout_FA_stage3_8;
    FA u_FA_stage3_8(
        .x1    	( stage2_pp0[1]     ),
        .x2    	( stage2_pp1[1]     ),
        .x3    	( cout_FA_stage3_7     ),
        .sum   	( final_sum[9]    ),
        .carry 	( cout_FA_stage3_8  )
    );


wire cout_FA_stage3_9;
    FA u_FA_stage3_9(
        .x1    	( stage2_pp0[2]     ),
        .x2    	( stage2_pp1[2]     ),
        .x3    	( cout_FA_stage3_8     ),
        .sum   	( final_sum[10]    ),
        .carry 	( cout_FA_stage3_9  )
    );


wire cout_FA_stage3_10;
    FA u_FA_stage3_10(
        .x1    	( stage2_pp0[3]     ),
        .x2    	( stage2_pp1[3]     ),
        .x3    	( cout_FA_stage3_9     ),
        .sum   	( final_sum[11]    ),
        .carry 	( cout_FA_stage3_10  )
    );

wire cout_FA_stage3_11;
    FA u_FA_stage3_11(
        .x1    	( stage2_pp0[4]     ),
        .x2    	( stage2_pp1[4]     ),
        .x3    	( cout_FA_stage3_10     ),
        .sum   	( final_sum[12]    ),
        .carry 	( cout_FA_stage3_11  )
    );

wire cout_FA_stage3_12;
    FA u_FA_stage3_12(
        .x1    	( stage2_pp0[5]     ),
        .x2    	( stage2_pp1[5]     ),
        .x3    	( cout_FA_stage3_11     ),
        .sum   	( final_sum[13]    ),
        .carry 	( cout_FA_stage3_12  )
    );


    FA u_FA_stage3_13(
        .x1    	( stage2_pp0[6]     ),
        .x2    	( stage2_pp1[6]     ),
        .x3    	( cout_FA_stage3_12     ),
        .sum   	( final_sum[14]    ),
        .carry 	( final_sum[15]  )
    );


endmodule

