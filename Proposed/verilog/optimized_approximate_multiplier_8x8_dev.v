`include "./only_sum_compressor.v"
`include "./only_carry_compressor.v"
`include "./exact_4to2_compressor.v"
`include "./FA.v"
`include "./HA.v"
`include "../../H.PEI/MUL2/verilog/FA.v"

module optimized_approximate_multiplier_8x8(
    input CLK,
    input [7:0] a,
    input [7:0] b,
    output [15:0] final_sum
);

    wire [2:0] pp0 ; // 3 bits
    wire [3:0] pp1 ; // 4 bits
    wire [4:0] pp2 ; // 5 bits
    wire [5:0] pp3 ; // 6 bits
    wire [6:0] pp4 ; // 7 bits
    wire [7:0] pp5 ; // 8 bits
    wire [7:0] pp6 ; // 8 bits
    wire [7:0] pp7 ; // 8 bits


    // Generate partial products
    // total 49 and gates 
    assign pp0 = {a[7] & b[0], a[6] & b[0], a[5] & b[0]}; // 3 and gates 
    assign pp1 = {a[7] & b[1], a[6] & b[1], a[5] & b[1], a[4] & b[1]}; // 4 and gates
    assign pp2 = {a[7] & b[2], a[6] & b[2], a[5] & b[2], a[4] & b[2], a[3] & b[2]}; // 5 and gates
    assign pp3 = {a[7] & b[3], a[6] & b[3], a[5] & b[3], a[4] & b[3], a[3] & b[3], a[2] & b[3]}; // 6 and gates
    assign pp4 = {a[7] & b[4], a[6] & b[4], a[5] & b[4], a[4] & b[4], a[3] & b[4], a[2] & b[4], a[1] & b[4]}; // 7 and gates
    assign pp5 = {a[7] & b[5], a[6] & b[5], a[5] & b[5], a[4] & b[5], a[3] & b[5], a[2] & b[5], a[1] & b[5], a[0] & b[5]}; // 8 and gates
    assign pp6 = {a[7] & b[6], a[6] & b[6], a[5] & b[6], a[4] & b[6], a[3] & b[6], a[2] & b[6], a[1] & b[6], a[0] & b[6]}; // 8 and gates    
    assign pp7 = {a[7] & b[7], a[6] & b[7], a[5] & b[7], a[4] & b[7], a[3] & b[7], a[2] & b[7], a[1] & b[7], a[0] & b[7]}; // 8 and gates


    // Stage 1
    wire stage1_pp0 [9:0];
    wire stage1_pp1 [7:0];
    wire stage1_pp2 [3:0];
    wire stage1_pp3 [3:0];

assign stage1_pp0 [9:8] = { pp7[7], pp6[7]};
assign stage1_pp1 [7:6] = { pp7[6], pp5[7]};
assign stage1_pp2 [3:2] = { pp6[6], pp6[5]};
assign stage1_pp3 [3:1] = { pp7[5], pp7[4], pp7[3]};
 

    // 实例化 only_sum_compressor

    only_sum_compressor u_only_sum_compressor_1(
        .x1  	( pp0[0]   ),
        .x2  	( pp1[0]   ),
        .x3  	( pp2[0]   ),
        .x4  	( pp3[0]   ),
        .sum 	( stage1_pp0[0]  )
    );

    only_sum_compressor u_only_sum_compressor_2(
        .x1  	( pp0[1]   ),
        .x2  	( pp1[1]   ),
        .x3  	( pp2[1]   ),
        .x4  	( pp3[1]   ),
        .sum 	( stage1_pp1[0]  )
    );

    only_sum_compressor u_only_sum_compressor_3(
        .x1  	( pp0[2]   ),
        .x2  	( pp1[2]   ),
        .x3  	( pp2[2]   ),
        .x4  	( pp3[2]   ),
        .sum 	( stage1_pp1[1]  )
    );



    // 实例化 only_carry_compressor
    only_carry_compressor_2to1 u_only_carry_compressor_2to1(
        .x1    	( pp4[0]     ),
        .x2    	( pp5[0]     ),
        .carry 	( stage1_pp0[1]  )
    );

    only_carry_compressor_3to1 u_only_carry_compressor_3to1(
        .x1    	( pp4[1]     ),
        .x2    	( pp5[1]     ),
        .x3    	( pp6[0]     ),
        .carry 	( stage1_pp0[2]  )
    );

    wire carry_4to1;
    only_carry_compressor_4to1 u_only_carry_compressor_4to1(
        .x1    	( pp4[2]     ),
        .x2    	( pp5[2]     ),
        .x3    	( pp6[1]     ),
        .x4    	( pp7[0]     ),
        .carry 	( carry_4to1 )
    );

// wire ecm = carry_4to1 & stage1_pp1[1] ;

wire exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage1_1(
    .x1    	( pp1[3]     ),
    .x2    	( pp2[3]     ),
    .x3    	( pp3[3]     ),
    .x4    	( pp4[3]     ),
    .cin   	( carry_4to1    ),
    .sum   	( stage1_pp0[3]    ),
    .carry 	( stage1_pp0[4]  ),
    .cout  	( exact_4to2_cout1   )
);

wire exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage1_2(
    .x1    	( pp2[4]     ),
    .x2    	( pp3[4]     ),
    .x3    	( pp4[4]     ),
    .x4    	( pp5[4]     ),
    .cin   	( exact_4to2_cout1    ),
    .sum   	( stage1_pp2[0]    ),
    .carry 	( stage1_pp0[5]  ),
    .cout  	( exact_4to2_cout2   )
);

wire exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage1_3(
    .x1    	( pp3[5]     ),
    .x2    	( pp4[5]     ),
    .x3    	( pp5[5]     ),
    .x4    	( pp6[4]     ),
    .cin   	( exact_4to2_cout2    ),
    .sum   	( stage1_pp2[1]    ),
    .carry 	( stage1_pp0[6]  ),
    .cout  	( exact_4to2_cout3   )
);


FA u_FA_1(
    .x1    	( pp5[3]     ),
    .x2    	( pp6[2]     ),
    .x3    	( pp7[1]     ),
    .sum   	( stage1_pp1[2]    ),
    .carry 	( stage1_pp1[3]  )
);

FA u_FA_2(
    .x1    	( pp4[6]     ),
    .x2    	( pp5[6]     ),
    .x3    	( exact_4to2_cout3     ),
    .sum   	( stage1_pp1[5]    ),
    .carry 	( stage1_pp0[7]  )
);


HA u_HA_1(
    .x1    	( pp6[3]     ),
    .x2    	( pp7[2]     ),
    .sum   	( stage1_pp3[0]    ),
    .carry 	( stage1_pp1[4]  )
);


// Stage 2

wire stage2_pp0 [9:0];
wire stage2_pp1 [7:0];
// assign stage2_pp0 [3:0] = stage1_pp0 [3:0];
assign stage2_pp0 [2:0] = stage1_pp0 [2:0];
assign stage2_pp1 [2:0] = { 1'b0, stage1_pp1 [1:0] };
// assign stage2_pp1 [2:0] = stage1_pp1 [2:0];
assign stage2_pp1 [7] = stage1_pp0[9];



// wire stage1_pp2_extra = (pp0[7] & pp1[6]) | (pp1[6] & pp2[5]) | (pp2[5] & pp3[4]) ;
// wire stage1_pp2_extra = 1'b0;
wire stage1_pp2_extra = pp0[7] ;


wire u_FA_extra_carry;
FA u_FA_extra(
    .x1    	( stage1_pp0[3]     ),
    .x2    	( stage1_pp1[2]     ),
    .x3    	( stage1_pp2_extra    ),
    .sum   	( stage2_pp0[3]    ),
    .carry 	( u_FA_extra_carry  )
);



wire stage2_exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage2_1(
    .x1    	( stage1_pp0[4]     ),
    .x2    	( stage1_pp1[3]     ),
    .x3    	( stage1_pp2[0]     ),
    .x4    	( stage1_pp3[0]     ),
    .cin   	( u_FA_extra_carry    ),
    .sum   	( stage2_pp0[4]    ),
    .carry 	( stage2_pp0[5]  ),
    .cout  	( stage2_exact_4to2_cout1   )
);

wire stage2_exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage2_2(
    .x1    	( stage1_pp0[5]     ),
    .x2    	( stage1_pp1[4]     ),
    .x3    	( stage1_pp2[1]     ),
    .x4    	( stage1_pp3[1]     ),
    .cin   	( stage2_exact_4to2_cout1    ),
    .sum   	( stage2_pp1[3]    ),
    .carry 	( stage2_pp0[6]  ),
    .cout  	( stage2_exact_4to2_cout2   )
);

wire stage2_exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage2_3(
    .x1    	( stage1_pp0[6]     ),
    .x2    	( stage1_pp1[5]     ),
    .x3    	( stage1_pp2[2]     ),
    .x4    	( stage1_pp3[2]     ),
    .cin   	( stage2_exact_4to2_cout2    ),
    .sum   	( stage2_pp1[4]    ),
    .carry 	( stage2_pp0[7]  ),
    .cout  	( stage2_exact_4to2_cout3   )
);

wire stage2_exact_4to2_cout4;
exact_4to2_compressor u_exact_4to2_compressor_stage2_4(
    .x1    	( stage1_pp0[7]     ),
    .x2    	( stage1_pp1[6]     ),
    .x3    	( stage1_pp2[3]     ),
    .x4    	( stage1_pp3[3]     ),
    .cin   	( stage2_exact_4to2_cout3    ),
    .sum   	( stage2_pp1[5]    ),
    .carry 	( stage2_pp0[8]  ),
    .cout  	( stage2_exact_4to2_cout4   )
);

FA u_FA_3(
    .x1    	( stage1_pp0[8]     ),
    .x2    	( stage1_pp1[7]     ),
    .x3    	( stage2_exact_4to2_cout4    ),
    .sum   	( stage2_pp1[6]    ),
    .carry 	( stage2_pp0[9]  )
);




// Stage 3


// assign final_sum [5:0] = { stage2_pp0[0], a[3], 4'b0110 };

assign final_sum [5:0] = { stage2_pp0[0], 5'b00110 };
// assign final_sum [5:0] = { stage2_pp0[0], 5'b00000 };


wire cout_HA_stage3_1;
HA u_HA_stage3_1(
    .x1    	( stage2_pp0[1]     ),
    .x2    	( stage2_pp1[0]     ),
    .sum   	( final_sum[6]    ),
    .carry 	( cout_HA_stage3_1  )
);

wire cout_FA_stage3_1;
    FA u_FA_stage3_1(
        .x1    	( stage2_pp0[2]     ),
        .x2    	( stage2_pp1[1]     ),
        .x3    	( cout_HA_stage3_1     ),
        .sum   	( final_sum[7]    ),
        .carry 	( cout_FA_stage3_1  )
    );


// wire cout_FA_stage3_2;
//     FA u_FA_stage3_2(
//         .x1    	( stage2_pp0[3]     ),
//         .x2    	( stage2_pp1[2]     ),
//         .x3    	( cout_FA_stage3_1     ),
//         .sum   	( final_sum[8]    ),
//         .carry 	( cout_FA_stage3_2  )
//     );

wire cout_HA_stage3_extra;
    HA u_HA_stage3_extra(
        .x1    	( stage2_pp0[3]     ),
        .x2    	( cout_FA_stage3_1     ),
        .sum   	( final_sum[8]    ),
        .carry 	( cout_HA_stage3_extra  )
    );

wire cout_HA_stage3_2;
HA u_HA_stage3_2(
    .x1    	( stage2_pp0[4]     ),
    .x2    	( cout_HA_stage3_extra     ),
    .sum   	( final_sum[9]    ),
    .carry 	( cout_HA_stage3_2  )
);



wire cout_FA_stage3_3;
    FA u_FA_stage3_3(
        .x1    	( stage2_pp0[5]     ),
        .x2    	( stage2_pp1[3]     ),
        .x3    	( cout_HA_stage3_2    ),
        .sum   	( final_sum[10]    ),
        .carry 	( cout_FA_stage3_3  )
    );


wire cout_FA_stage3_4;
    FA u_FA_stage3_4(
        .x1    	( stage2_pp0[6]     ),
        .x2    	( stage2_pp1[4]     ),
        .x3    	( cout_FA_stage3_3    ),
        .sum   	( final_sum[11]    ),
        .carry 	( cout_FA_stage3_4  )
    );
    
wire cout_FA_stage3_5;
    FA u_FA_stage3_5(
        .x1    	( stage2_pp0[7]     ),
        .x2    	( stage2_pp1[5]     ),
        .x3    	( cout_FA_stage3_4    ),
        .sum   	( final_sum[12]    ),
        .carry 	( cout_FA_stage3_5  )
    );

wire cout_FA_stage3_6;
    FA u_FA_stage3_6(
        .x1    	( stage2_pp0[8]     ),
        .x2    	( stage2_pp1[6]     ),
        .x3    	( cout_FA_stage3_5    ),
        .sum   	( final_sum[13]    ),
        .carry 	( cout_FA_stage3_6  )
    );  

wire cout_FA_stage3_7;
    FA u_FA_stage3_7(
        .x1    	( stage2_pp0[9]     ),
        .x2    	( stage2_pp1[7]     ),
        .x3    	( cout_FA_stage3_6    ),
        .sum   	( final_sum[14]    ),
        .carry 	( final_sum[15]  )
    );
   
endmodule

