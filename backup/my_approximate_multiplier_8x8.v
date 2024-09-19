
module my_approximate_multiplier_8x8(
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
    assign pp[0][7:5] = {a[7] & b[0], a[6] & b[0], a[5] & b[0]}; // 3 and gates 
    assign pp[1][7:4] = {a[7] & b[1], a[6] & b[1], a[5] & b[1], a[4] & b[1]}; // 4 and gates
    assign pp[2][7:3] = {a[7] & b[2], a[6] & b[2], a[5] & b[2], a[4] & b[2], a[3] & b[2]}; // 5 and gates
    assign pp[3][7:2] = {a[7] & b[3], a[6] & b[3], a[5] & b[3], a[4] & b[3], a[3] & b[3], a[2] & b[3]}; // 6 and gates
    assign pp[4][7:1] = {a[7] & b[4], a[6] & b[4], a[5] & b[4], a[4] & b[4], a[3] & b[4], a[2] & b[4], a[1] & b[4]}; // 7 and gates
    assign pp[5][7:0] = {a[7] & b[5], a[6] & b[5], a[5] & b[5], a[4] & b[5], a[3] & b[5], a[2] & b[5], a[1] & b[5], a[0] & b[5]}; // 8 and gates
    assign pp[6][7:0] = {a[7] & b[6], a[6] & b[6], a[5] & b[6], a[4] & b[6], a[3] & b[6], a[2] & b[6], a[1] & b[6], a[0] & b[6]}; // 8 and gates    
    assign pp[7][7:0] = {a[7] & b[7], a[6] & b[7], a[5] & b[7], a[4] & b[7], a[3] & b[7], a[2] & b[7], a[1] & b[7], a[0] & b[7]}; // 8 and gates



    // 计算或门输出
    // S1 = pp[0][5] | pp[1][4] | pp[2][3] | pp[3][2]
    // S2 = pp[0][6] | pp[1][5] | pp[2][4] | pp[3][3]
    // S3 = pp[0][7] | pp[1][6] | pp[2][5] | pp[3][4]

    // C1 = pp[4][1] | pp[5][0]
    // C2 = pp[4][2] | pp[5][1] | pp[6][0]
    // C3 = pp[4][3] | pp[5][2] | pp[6][1] | pp[7][0]

    // Stage 1
    wire S1, S2, S3, C1, C2, C3;
    wire Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3;
    wire Cout_exact_compressor_1, Cout_exact_compressor_2, Cout_exact_compressor_3;
    wire Sum_exact_compressor_1, Sum_exact_compressor_2, Sum_exact_compressor_3;
    wire Sum_FA_1, Sum_FA_2, Cout_FA_1, Cout_FA_2;
    wire Cout_HA, Sum_HA;

    assign S1 = pp[0][5] | pp[1][4] | pp[2][3] | pp[3][2];
    assign S2 = pp[0][6] | pp[1][5] | pp[2][4] | pp[3][3];
    assign S3 = pp[0][7] | pp[1][6] | pp[2][5] | pp[3][4];
    assign C1 = pp[4][1] | pp[5][0];
    assign C2 = pp[4][2] | pp[5][1] | pp[6][0];
    assign C3 = pp[4][3] | pp[5][2] | pp[6][1] | pp[7][0];


    // # Cout_exact_compressor = p1 & p2 | p3 & (p1 | p2)
    // Cout_exact_compressor_1 = pp[1][7] & pp[2][6] | pp[3][5] & (pp[1][7] | pp[2][6])
    // Cout_exact_compressor_2 = pp[2][7] & pp[3][6] | pp[4][5] & (pp[2][7] | pp[3][6])
    // Cout_exact_compressor_3 = pp[3][7] & pp[4][6] | pp[5][5] & (pp[3][7] | pp[4][6])

    assign Cout_exact_compressor_1 = (pp[1][7] & pp[2][6]) | (pp[3][5] & (pp[1][7] | pp[2][6]));
    assign Cout_exact_compressor_2 = (pp[2][7] & pp[3][6]) | (pp[4][5] & (pp[2][7] | pp[3][6]));
    assign Cout_exact_compressor_3 = (pp[3][7] & pp[4][6]) | (pp[5][5] & (pp[3][7] | pp[4][6]));

    assign Carry_exact_compressor_1 = ((pp[1][7] ^ pp[2][6] ^ pp[3][5]) & pp[4][4]) | (C3 & ((pp[1][7] ^ pp[2][6] ^ pp[3][5]) | pp[4][4]));
    assign Carry_exact_compressor_2 = ((pp[2][7] ^ pp[3][6] ^ pp[4][5]) & pp[5][4]) | (Cout_exact_compressor_1 & ((pp[2][7] ^ pp[3][6] ^ pp[4][5]) | pp[5][4]));
    assign Carry_exact_compressor_3 = ((pp[3][7] ^ pp[4][6] ^ pp[5][5]) & pp[6][4]) | (Cout_exact_compressor_2 & ((pp[3][7] ^ pp[4][6] ^ pp[5][5]) | pp[6][4]));

    assign Sum_exact_compressor_1 = (pp[1][7] ^ pp[2][6] ^ pp[3][5]) ^ pp[4][4] ^ C3;
    assign Sum_exact_compressor_2 = (pp[2][7] ^ pp[3][6] ^ pp[4][5]) ^ pp[5][4] ^ Cout_exact_compressor_1;
    assign Sum_exact_compressor_3 = (pp[3][7] ^ pp[4][6] ^ pp[5][5]) ^ pp[6][4] ^ Cout_exact_compressor_2;

    assign Cout_FA_1 = (pp[5][3] & pp[6][2]) | (pp[7][1] & (pp[5][3] | pp[6][2]));
    assign Cout_FA_2 = (pp[4][7] & pp[5][6]) | (Cout_exact_compressor_3 & (pp[4][7] | pp[5][6]));

    assign Sum_FA_1 = pp[5][3] ^ pp[6][2] ^ pp[7][1];
    assign Sum_FA_2 = pp[4][7] ^ pp[5][6] ^ Cout_exact_compressor_3;

    assign Cout_HA = pp[6][3] & pp[7][2];
    assign Sum_HA = pp[6][3] ^ pp[7][2];

    // Stage 2
    wire stage2_Cout_exact_compressor_1, stage2_Cout_exact_compressor_2, stage2_Cout_exact_compressor_3, stage2_Cout_exact_compressor_4;
    wire stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4;
    wire stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4;
    wire stage2_Cout_FA, stage2_Sum_FA;

    assign stage2_Cout_exact_compressor_1 = (Carry_exact_compressor_1 & Cout_FA_1) | (Sum_exact_compressor_2 & (Carry_exact_compressor_1 | Cout_FA_1));
    assign stage2_Cout_exact_compressor_2 = (Carry_exact_compressor_2 & Cout_HA) | (Sum_exact_compressor_3 & (Carry_exact_compressor_2 | Cout_HA));
    assign stage2_Cout_exact_compressor_3 = (Carry_exact_compressor_3 & Sum_FA_2) | (pp[6][5] & (Carry_exact_compressor_3 | Sum_FA_2));
    assign stage2_Cout_exact_compressor_4 = (Cout_FA_2 & pp[5][7]) | (pp[6][6] & (Cout_FA_2 | pp[5][7]));

    assign stage2_Carry_exact_compressor_1 = ((Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) & Sum_HA) | (1'b0 & ((Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) | Sum_HA));
    assign stage2_Carry_exact_compressor_2 = ((Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) & pp[7][3]) | (stage2_Cout_exact_compressor_1 & ((Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) | pp[7][3]));
    assign stage2_Carry_exact_compressor_3 = ((Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) & pp[7][4]) | (stage2_Cout_exact_compressor_2 & ((Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) | pp[7][4]));
    assign stage2_Carry_exact_compressor_4 = ((Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) & pp[7][5]) | (stage2_Cout_exact_compressor_3 & ((Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) | pp[7][5]));

    assign stage2_Sum_exact_compressor_1 = (Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) ^ Sum_HA ^ 1'b0;
    assign stage2_Sum_exact_compressor_2 = (Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) ^ pp[7][3] ^ stage2_Cout_exact_compressor_1;
    assign stage2_Sum_exact_compressor_3 = (Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) ^ pp[7][4] ^ stage2_Cout_exact_compressor_2;
    assign stage2_Sum_exact_compressor_4 = (Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) ^ pp[7][5] ^ stage2_Cout_exact_compressor_3;

    assign stage2_Cout_FA = (pp[6][7] & pp[7][6]) | (stage2_Cout_exact_compressor_4 & (pp[6][7] | pp[7][6]));
    assign stage2_Sum_FA = pp[6][7] ^ pp[7][6] ^ stage2_Cout_exact_compressor_4;

    // Stage 3
    wire stage3_Cout_HA_1, stage3_Cout_HA_2;
    wire stage3_Sum_HA_1, stage3_Sum_HA_2;
    wire stage3_Cout_FA_1, stage3_Cout_FA_2, stage3_Cout_FA_3, stage3_Cout_FA_4, stage3_Cout_FA_5, stage3_Cout_FA_6, stage3_Cout_FA_7;
    wire stage3_Sum_FA_1, stage3_Sum_FA_2, stage3_Sum_FA_3, stage3_Sum_FA_4, stage3_Sum_FA_5, stage3_Sum_FA_6, stage3_Sum_FA_7;

    assign stage3_Cout_HA_1 = C1 & S2;
    assign stage3_Sum_HA_1 = C1 ^ S2;

    assign stage3_Cout_FA_1 = (C2 & S3) | (stage3_Cout_HA_1 & (C2 | S3));
    assign stage3_Cout_FA_2 = (Sum_exact_compressor_1 & Sum_FA_1) | (stage3_Cout_FA_1 & (Sum_exact_compressor_1 | Sum_FA_1));

    assign stage3_Cout_HA_2 = stage2_Sum_exact_compressor_1 & stage3_Cout_FA_2;
    assign stage3_Sum_HA_2 = stage2_Sum_exact_compressor_1 ^ stage3_Cout_FA_2;

    assign stage3_Cout_FA_3 = (stage2_Carry_exact_compressor_1 & stage2_Sum_exact_compressor_2) | (stage3_Cout_HA_2 & (stage2_Carry_exact_compressor_1 | stage2_Sum_exact_compressor_2));
    assign stage3_Cout_FA_4 = (stage2_Carry_exact_compressor_2 & stage2_Sum_exact_compressor_3) | (stage3_Cout_FA_3 & (stage2_Carry_exact_compressor_2 | stage2_Sum_exact_compressor_3));
    assign stage3_Cout_FA_5 = (stage2_Carry_exact_compressor_3 & stage2_Sum_exact_compressor_4) | (stage3_Cout_FA_4 & (stage2_Carry_exact_compressor_3 | stage2_Sum_exact_compressor_4));
    assign stage3_Cout_FA_6 = (stage2_Carry_exact_compressor_4 & stage2_Sum_FA) | (stage3_Cout_FA_5 & (stage2_Carry_exact_compressor_4 | stage2_Sum_FA));
    assign stage3_Cout_FA_7 = (stage2_Cout_FA & pp[7][7]) | (stage3_Cout_FA_6 & (stage2_Cout_FA | pp[7][7]));

    assign stage3_Sum_FA_1 = C2 ^ S3 ^ stage3_Cout_HA_1;
    assign stage3_Sum_FA_2 = Sum_exact_compressor_1 ^ Sum_FA_1 ^ stage3_Cout_FA_1;
    assign stage3_Sum_FA_3 = stage2_Carry_exact_compressor_1 ^ stage2_Sum_exact_compressor_2 ^ stage3_Cout_HA_2;
    assign stage3_Sum_FA_4 = stage2_Carry_exact_compressor_2 ^ stage2_Sum_exact_compressor_3 ^ stage3_Cout_FA_3;
    assign stage3_Sum_FA_5 = stage2_Carry_exact_compressor_3 ^ stage2_Sum_exact_compressor_4 ^ stage3_Cout_FA_4;
    assign stage3_Sum_FA_6 = stage2_Carry_exact_compressor_4 ^ stage2_Sum_FA ^ stage3_Cout_FA_5;
    assign stage3_Sum_FA_7 = stage2_Cout_FA ^ pp[7][7] ^ stage3_Cout_FA_6;

    // Final stage
    assign final_sum = 16'd6 + {stage3_Cout_FA_7, stage3_Sum_FA_7, stage3_Sum_FA_6, stage3_Sum_FA_5, stage3_Sum_FA_4, stage3_Sum_FA_3, stage3_Sum_HA_2, stage3_Sum_FA_2, stage3_Sum_FA_1, stage3_Sum_HA_1, S1, 5'b0};

endmodule
