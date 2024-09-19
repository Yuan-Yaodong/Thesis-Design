`include "./exact_4to2_compressor.v"
`include "./FA.v"
`include "./HA.v"

module Sabetzadeh(
    input CLK,
    input [7:0] a,
    input [7:0] b,
    output [15:0] final_sum
);

    wire       pp0 ; // 1 bits   
    wire [1:0] pp1 ; // 2 bits
    wire [2:0] pp2 ; // 3 bits
    wire [3:0] pp3 ; // 4 bits
    wire [4:0] pp4 ; // 5 bits
    wire [5:0] pp5 ; // 6 bits
    wire [6:0] pp6 ; // 7 bits
    wire [7:0] pp7 ; // 8 bits


    // Generate partial products
    // total 36 and gates 
    assign pp0 = {a[7] & b[0]}; // 1 and gates 
    assign pp1 = {a[7] & b[1], a[6] & b[1]}; // 2 and gates
    assign pp2 = {a[7] & b[2], a[6] & b[2], a[5] & b[2]}; // 3 and gates
    assign pp3 = {a[7] & b[3], a[6] & b[3], a[5] & b[3], a[4] & b[3]}; // 4 and gates
    assign pp4 = {a[7] & b[4], a[6] & b[4], a[5] & b[4], a[4] & b[4], a[3] & b[4]}; // 5 and gates
    assign pp5 = {a[7] & b[5], a[6] & b[5], a[5] & b[5], a[4] & b[5], a[3] & b[5], a[2] & b[5]}; // 6 and gates
    assign pp6 = {a[7] & b[6], a[6] & b[6], a[5] & b[6], a[4] & b[6], a[3] & b[6], a[2] & b[6], a[1] & b[6]}; // 7 and gates    
    assign pp7 = {a[7] & b[7], a[6] & b[7], a[5] & b[7], a[4] & b[7], a[3] & b[7], a[2] & b[7], a[1] & b[7], a[0] & b[7]}; // 8 and gates




wire ECM_Carry_1 = pp0    | pp1[0] | pp2[0] | pp3[0] ;
wire ECM_Carry_2 = pp4[0] | pp5[0] | pp6[0] | pp7[0] ;


    // Stage 1
    wire stage1_pp0 [6:0];
    wire stage1_pp1 [5:0];
    wire stage1_pp2 [3:0];
    wire stage1_pp3 [3:0];


 
assign stage1_pp0 [6:5] =  { pp7[7], pp6[6] };
assign stage1_pp1 [5:4]  = { pp7[6], pp5[5] };
assign stage1_pp2 [3:2]  = { pp6[5], pp6[4] };
assign stage1_pp3 [3:1]  = { pp7[5], pp7[4], pp7[3] };


wire exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage1_1(
    .x1    	( pp1[1]     ),
    .x2    	( pp2[1]     ),
    .x3    	( pp3[1]     ),
    .x4    	( pp4[1]     ),
    .cin   	( ECM_Carry_1    ),
    .sum   	( stage1_pp0[0]    ),
    .carry 	( stage1_pp0[1]  ),
    .cout  	( exact_4to2_cout1   )
);

wire exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage1_2(
    .x1    	( pp2[2]     ),
    .x2    	( pp3[2]     ),
    .x3    	( pp4[2]     ),
    .x4    	( pp5[2]     ),
    .cin   	( exact_4to2_cout1    ),
    .sum   	( stage1_pp2[0]    ),
    .carry 	( stage1_pp0[2]  ),
    .cout  	( exact_4to2_cout2   )
);

wire exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage1_3(
    .x1    	( pp3[3]     ),
    .x2    	( pp4[3]     ),
    .x3    	( pp5[3]     ),
    .x4    	( pp6[3]     ),
    .cin   	( exact_4to2_cout2    ),
    .sum   	( stage1_pp2[1]    ),
    .carry 	( stage1_pp0[3]  ),
    .cout  	( exact_4to2_cout3   )
);


FA u_FA_1(
    .x1    	( pp5[1]     ),
    .x2    	( pp6[1]     ),
    .x3    	( pp7[1]     ),
    .sum   	( stage1_pp1[0]    ),
    .carry 	( stage1_pp1[1]  )
);

FA u_FA_2(
    .x1    	( pp4[4]     ),
    .x2    	( pp5[4]     ),
    .x3    	( exact_4to2_cout3     ),
    .sum   	( stage1_pp1[3]    ),
    .carry 	( stage1_pp0[4]  )
);


HA u_HA_1(
    .x1    	( pp6[2]     ),
    .x2    	( pp7[2]     ),
    .sum   	( stage1_pp3[0]    ),
    .carry 	( stage1_pp1[2]  )
);


// Stage 2

wire stage2_pp0 [6:0];
wire stage2_pp1 [4:0];


wire stage2_FA_carry;
FA u_FA_stage2_1(
    .x1    	( stage1_pp0[0]     ),
    .x2    	( stage1_pp1[0]     ),
    .x3    	( ECM_Carry_2   ),
    .sum   	( stage2_pp0[0]    ),
    .carry 	( stage2_FA_carry  )
);



wire stage2_exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage2_1(
    .x1    	( stage1_pp0[1]     ),
    .x2    	( stage1_pp1[1]     ),
    .x3    	( stage1_pp2[0]     ),
    .x4    	( stage1_pp3[0]     ),
    .cin   	( stage2_FA_carry    ),
    .sum   	( stage2_pp0[1]    ),
    .carry 	( stage2_pp0[2]  ),
    .cout  	( stage2_exact_4to2_cout1   )
);

wire stage2_exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage2_2(
    .x1    	( stage1_pp0[2]     ),
    .x2    	( stage1_pp1[2]     ),
    .x3    	( stage1_pp2[1]     ),
    .x4    	( stage1_pp3[1]     ),
    .cin   	( stage2_exact_4to2_cout1    ),
    .sum   	( stage2_pp1[0]    ),
    .carry 	( stage2_pp0[3]  ),
    .cout  	( stage2_exact_4to2_cout2   )
);

wire stage2_exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage2_3(
    .x1    	( stage1_pp0[3]     ),
    .x2    	( stage1_pp1[3]     ),
    .x3    	( stage1_pp2[2]     ),
    .x4    	( stage1_pp3[2]     ),
    .cin   	( stage2_exact_4to2_cout2    ),
    .sum   	( stage2_pp1[1]    ),
    .carry 	( stage2_pp0[4]  ),
    .cout  	( stage2_exact_4to2_cout3   )
);

wire stage2_exact_4to2_cout4;
exact_4to2_compressor u_exact_4to2_compressor_stage2_4(
    .x1    	( stage1_pp0[4]     ),
    .x2    	( stage1_pp1[4]     ),
    .x3    	( stage1_pp2[3]     ),
    .x4    	( stage1_pp3[3]     ),
    .cin   	( stage2_exact_4to2_cout3    ),
    .sum   	( stage2_pp1[2]    ),
    .carry 	( stage2_pp0[5]  ),
    .cout  	( stage2_exact_4to2_cout4   )
);

FA u_FA_stage2_2(
    .x1    	( stage1_pp0[5]     ),
    .x2    	( stage1_pp1[5]     ),
    .x3    	( stage2_exact_4to2_cout4    ),
    .sum   	( stage2_pp1[3]    ),
    .carry 	( stage2_pp0[6]  )
);

assign stage2_pp1[4] = stage1_pp0[6];



// Stage 3
assign final_sum [9:0] = { stage2_pp0[1], stage2_pp0[0], 8'b00000110 };
// assign final_sum [5:0] = { stage2_pp0[0], 5'b00000 };


wire cout_HA_stage3_1;
HA u_HA_stage3_1(
    .x1    	( stage2_pp0[2]     ),
    .x2    	( stage2_pp1[0]     ),
    .sum   	( final_sum[10]    ),
    .carry 	( cout_HA_stage3_1  )
);

wire cout_FA_stage3_1;
    FA u_FA_stage3_1(
        .x1    	( stage2_pp0[3]     ),
        .x2    	( stage2_pp1[1]     ),
        .x3    	( cout_HA_stage3_1     ),
        .sum   	( final_sum[11]    ),
        .carry 	( cout_FA_stage3_1  )
    );


wire cout_FA_stage3_2;
    FA u_FA_stage3_2(
        .x1    	( stage2_pp0[4]     ),
        .x2    	( stage2_pp1[2]     ),
        .x3    	( cout_FA_stage3_1     ),
        .sum   	( final_sum[12]    ),
        .carry 	( cout_FA_stage3_2  )
    );


wire cout_FA_stage3_3;
    FA u_FA_stage3_3(
        .x1    	( stage2_pp0[5]     ),
        .x2    	( stage2_pp1[3]     ),
        .x3    	( cout_FA_stage3_2    ),
        .sum   	( final_sum[13]    ),
        .carry 	( cout_FA_stage3_3  )
    );


    FA u_FA_stage3_4(
        .x1    	( stage2_pp0[6]     ),
        .x2    	( stage2_pp1[4]     ),
        .x3    	( cout_FA_stage3_3    ),
        .sum   	( final_sum[14]    ),
        .carry 	( final_sum[15]  )
    );
   
endmodule

