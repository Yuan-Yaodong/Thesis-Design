`include "./exact_4to2_compressor.v"
`include "./FA.v"
`include "./HA.v"

module Kumar(
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
    wire [14:0] stage1_pp0 ;
    wire [6:0]  stage1_pp1 ;
    wire [3:0]  stage1_pp2 ;
    wire [3:0]  stage1_pp3 ;




assign stage1_pp0[0] = pp0[0] ;
assign stage1_pp0[1] = pp0[1] | pp1[0] ;
assign stage1_pp0[2] = pp0[2] | pp1[1] | pp2[0] ;
assign stage1_pp0[3] = pp0[3] | pp1[2] | pp2[1] | pp3[0] ;
assign stage1_pp0[4] = pp0[4] | pp1[3] | pp2[2] | pp3[1] | pp4[0] ;
assign stage1_pp0[5] = pp0[5] | pp1[4] | pp2[3] | pp3[2] | pp4[1] | pp5[0] ;
assign stage1_pp0[6] = pp0[6] | pp1[5] | pp2[4] | pp3[3] | pp4[2] | pp5[1] | pp6[0] ;
assign stage1_pp0[7] = pp0[7] | pp1[6] | pp2[5] | pp3[4] ;

assign stage1_pp1[0] = pp4[3] | pp5[2] | pp6[1] | pp7[0] ;



wire exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage1_1(
    .x1    	( pp1[7]     ),
    .x2    	( pp2[6]     ),
    .x3    	( pp3[5]     ),
    .x4    	( pp4[4]     ),
    .cin   	( 1'b0    ),
    .sum   	( stage1_pp0[8]    ),
    .carry 	( stage1_pp0[9]  ),
    .cout  	( exact_4to2_cout1   )
);

FA u_FA_1(
    .x1    	( pp5[3]     ),
    .x2    	( pp6[2]     ),
    .x3    	( pp7[1]     ),
    .sum   	( stage1_pp1[1]    ),
    .carry 	( stage1_pp1[2]  )
);



wire exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage1_2(
    .x1    	( pp2[7]     ),
    .x2    	( pp3[6]     ),
    .x3    	( pp4[5]     ),
    .x4    	( pp5[4]     ),
    .cin   	( exact_4to2_cout1    ),
    .sum   	( stage1_pp2[0]    ),
    .carry 	( stage1_pp0[10]  ),
    .cout  	( exact_4to2_cout2   )
);


HA u_HA_1(
    .x1    	( pp6[3]     ),
    .x2    	( pp7[2]     ),
    .sum   	( stage1_pp3[0]    ),
    .carry 	( stage1_pp1[3]  )
);


wire exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage1_3(
    .x1    	( pp3[7]     ),
    .x2    	( pp4[6]     ),
    .x3    	( pp5[5]     ),
    .x4    	( pp6[4]     ),
    .cin   	( exact_4to2_cout2    ),
    .sum   	( stage1_pp2[1]    ),
    .carry 	( stage1_pp0[11]  ),
    .cout  	( exact_4to2_cout3   )
);


FA u_FA_2(
    .x1    	( pp4[7]     ),
    .x2    	( pp5[6]     ),
    .x3    	( exact_4to2_cout3     ),
    .sum   	( stage1_pp1[4]    ),
    .carry 	( stage1_pp0[12]  )
);


assign stage1_pp0[14:13] = { pp7[7], pp6[7] };
assign stage1_pp1[6:5] = { pp7[6], pp5[7] };
assign stage1_pp2[3:2] = { pp6[6], pp6[5] };
assign stage1_pp3[3:1] = { pp7[5], pp7[4], pp7[3] };

// Stage 2

wire ECM = stage1_pp0[7] & stage1_pp1[0];




wire [14:0] stage2_pp0 ;
wire [5:0]  stage2_pp1 ;


assign stage2_pp0[7:0] = stage1_pp0[7:0];
assign stage2_pp1[0] = stage1_pp1[0];

wire stage2_FA_cout;
FA u_FA_stage2_1(
    .x1    	( stage1_pp0[8]     ),
    .x2    	( stage1_pp1[1]     ),
    .x3    	( ECM   ),
    .sum   	( stage2_pp0[8]    ),
    .carry 	( stage2_FA_cout  )
);



wire stage2_exact_4to2_cout1;
exact_4to2_compressor u_exact_4to2_compressor_stage2_1(
    .x1    	( stage1_pp0[9]     ),
    .x2    	( stage1_pp1[2]     ),
    .x3    	( stage1_pp2[0]     ),
    .x4    	( stage1_pp3[0]     ),
    .cin   	( stage2_FA_cout    ),
    .sum   	( stage2_pp0[9]    ),
    .carry 	( stage2_pp0[10]  ),
    .cout  	( stage2_exact_4to2_cout1   )
);

wire stage2_exact_4to2_cout2;
exact_4to2_compressor u_exact_4to2_compressor_stage2_2(
    .x1    	( stage1_pp0[10]     ),
    .x2    	( stage1_pp1[3]     ),
    .x3    	( stage1_pp2[1]     ),
    .x4    	( stage1_pp3[1]     ),
    .cin   	( stage2_exact_4to2_cout1    ),
    .sum   	( stage2_pp1[1]    ),
    .carry 	( stage2_pp0[11]  ),
    .cout  	( stage2_exact_4to2_cout2   )
);

wire stage2_exact_4to2_cout3;
exact_4to2_compressor u_exact_4to2_compressor_stage2_3(
    .x1    	( stage1_pp0[11]     ),
    .x2    	( stage1_pp1[4]     ),
    .x3    	( stage1_pp2[2]     ),
    .x4    	( stage1_pp3[2]     ),
    .cin   	( stage2_exact_4to2_cout2    ),
    .sum   	( stage2_pp1[2]    ),
    .carry 	( stage2_pp0[12]  ),
    .cout  	( stage2_exact_4to2_cout3   )
);

wire stage2_exact_4to2_cout4;
exact_4to2_compressor u_exact_4to2_compressor_stage2_4(
    .x1    	( stage1_pp0[12]     ),
    .x2    	( stage1_pp1[5]     ),
    .x3    	( stage1_pp2[3]     ),
    .x4    	( stage1_pp3[3]     ),
    .cin   	( stage2_exact_4to2_cout3    ),
    .sum   	( stage2_pp1[3]    ),
    .carry 	( stage2_pp0[13]  ),
    .cout  	( stage2_exact_4to2_cout4   )
);

FA u_FA_stage2_2(
    .x1    	( stage1_pp0[13]     ),
    .x2    	( stage1_pp1[6]     ),
    .x3    	( stage2_exact_4to2_cout4    ),
    .sum   	( stage2_pp1[4]    ),
    .carry 	( stage2_pp0[14]  )
);

assign stage2_pp1[5] = stage1_pp0[14];



// Stage 3

assign final_sum[6:0] = stage2_pp0[6:0];

// assign final_sum [5:0] = { stage2_pp0[0], 5'b00000 };


wire cout_HA_stage3_1;
HA u_HA_stage3_1(
    .x1    	( stage2_pp0[7]     ),
    .x2    	( stage2_pp1[0]     ),
    .sum   	( final_sum[7]    ),
    .carry 	( cout_HA_stage3_1  )
);

wire cout_HA_stage3_2;
HA u_HA_stage3_2(
    .x1    	( stage2_pp0[8]     ),
    .x2    	( cout_HA_stage3_1     ),
    .sum   	( final_sum[8]    ),
    .carry 	( cout_HA_stage3_2  )
);

wire cout_HA_stage3_3;
HA u_HA_stage3_3(
    .x1    	( stage2_pp0[9]     ),
    .x2    	( cout_HA_stage3_2     ),
    .sum   	( final_sum[9]    ),
    .carry 	( cout_HA_stage3_3  )
);



wire cout_FA_stage3_1;
    FA u_FA_stage3_1(
        .x1    	( stage2_pp0[10]     ),
        .x2    	( stage2_pp1[1]     ),
        .x3    	( cout_HA_stage3_3     ),
        .sum   	( final_sum[10]    ),
        .carry 	( cout_FA_stage3_1  )
    );


wire cout_FA_stage3_2;
    FA u_FA_stage3_2(
        .x1    	( stage2_pp0[11]     ),
        .x2    	( stage2_pp1[2]     ),
        .x3    	( cout_FA_stage3_1     ),
        .sum   	( final_sum[11]    ),
        .carry 	( cout_FA_stage3_2  )
    );


wire cout_FA_stage3_3;
    FA u_FA_stage3_3(
        .x1    	( stage2_pp0[12]     ),
        .x2    	( stage2_pp1[3]     ),
        .x3    	( cout_FA_stage3_2    ),
        .sum   	( final_sum[12]    ),
        .carry 	( cout_FA_stage3_3  )
    );


wire cout_FA_stage3_4;
    FA u_FA_stage3_4(
        .x1    	( stage2_pp0[13]     ),
        .x2    	( stage2_pp1[4]     ),
        .x3    	( cout_FA_stage3_3    ),
        .sum   	( final_sum[13]    ),
        .carry 	( cout_FA_stage3_4  )
    );


    FA u_FA_stage3_5(
        .x1    	( stage2_pp0[14]     ),
        .x2    	( stage2_pp1[5]     ),
        .x3    	( cout_FA_stage3_4    ),
        .sum   	( final_sum[14]    ),
        .carry 	( final_sum[15]  )
    );  

   
endmodule

