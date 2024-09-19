import pandas as pd

# 生成部分积矩阵
def calculate_partial_products(a, b):
    a = [int(bit) for bit in a[::-1]]  # 反转 a，使 a[0] 为最低位
    b = [int(bit) for bit in b[::-1]]  # 反转 b，使 b[0] 为最低位
    pp = [[] for _ in range(8)]
    
    for i in range(8):
        for j in range(8):
            pp[i].append(a[j] * b[i])
    
    return pp

# 打印部分积矩阵
def print_partial_product_matrix(a, b):
    print(f"A: {a}")
    print(f"B: {b}")
    print("\nPartial Product Matrix:")
    
    pp = calculate_partial_products(a, b)
    for i in range(8):
        print(f"pp{i}: {pp[i][::-1]}")  # 反转每行以保持原始位顺序

# 计算stage1的输出
def stage_1_calculate_output(pp, a, b):
    # 取pp0, pp1, pp2, pp3的第6个元素（索引为5，因为我们之前反转了顺序


    # 计算ECM或门输出
    C1 = pp[0][7]| pp[1][6]| pp[2][5]| pp[3][4]
    C2 = pp[4][3]| pp[5][2]| pp[6][1]| pp[7][0]

    # Cout_exact_compressor = p1 & p2 | p3 & (p1 | p2)
    Cout_exact_compressor_1 = pp[1][7] & pp[2][6] | pp[3][5] & (pp[1][7] | pp[2][6])
    Cout_exact_compressor_2 = pp[2][7] & pp[3][6] | pp[4][5] & (pp[2][7] | pp[3][6])
    Cout_exact_compressor_3 = pp[3][7] & pp[4][6] | pp[5][5] & (pp[3][7] | pp[4][6])

    #Carry_exact_compressor = ((p1 ^ p2 ^ p3) & p4) | (Cin & ((p1 ^ p2 ^ p3) | p4))
    Carry_exact_compressor_1 = (pp[1][7] ^ pp[2][6] ^ pp[3][5]) & pp[4][4] | C1 & ((pp[1][7] ^ pp[2][6] ^ pp[3][5]) | pp[4][4])
    Carry_exact_compressor_2 = (pp[2][7] ^ pp[3][6] ^ pp[4][5]) & pp[5][4] | Cout_exact_compressor_1 & ((pp[2][7] ^ pp[3][6] ^ pp[4][5]) | pp[5][4])
    Carry_exact_compressor_3 = (pp[3][7] ^ pp[4][6] ^ pp[5][5]) & pp[6][4] | Cout_exact_compressor_2 & ((pp[3][7] ^ pp[4][6] ^ pp[5][5]) | pp[6][4])

    #Sum_exact_compressor = (p1 ^ p2 ^ p3) ^ p4 ^ Cin

    Sum_exact_compressor_1 = (pp[1][7] ^ pp[2][6] ^ pp[3][5]) ^ pp[4][4] ^ C1
    Sum_exact_compressor_2 = (pp[2][7] ^ pp[3][6] ^ pp[4][5]) ^ pp[5][4] ^ Cout_exact_compressor_1
    Sum_exact_compressor_3 = (pp[3][7] ^ pp[4][6] ^ pp[5][5]) ^ pp[6][4] ^ Cout_exact_compressor_2
    

    
    # Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    Cout_FA_1 = pp[5][3] & pp[6][2] | pp[7][1]& (pp[5][3] | pp[6][2])
    Cout_FA_2 = pp[4][7] & pp[5][6] | Cout_exact_compressor_3 & (pp[4][7] | pp[5][6])

    # Sum_FA = (p1 ^ p2) ^ Cin
    Sum_FA_1 = pp[5][3] ^ pp[6][2] ^ pp[7][1]
    Sum_FA_2 = pp[4][7] ^ pp[5][6] ^ Cout_exact_compressor_3

    # Cout_HA = p1 & p2
    Cout_HA = pp[6][3] & pp[7][2]

    # Sum_HA = p1 ^ p2
    Sum_HA = pp[6][3] ^ pp[7][2]  
    
    return C2, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, \
    Sum_exact_compressor_1, Sum_exact_compressor_2, Sum_exact_compressor_3, Sum_FA_1, Sum_FA_2, \
    Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA

# 计算stage2的输出
def stage_2_calculate_output(C2, pp, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, 
    Sum_exact_compressor_1,Sum_exact_compressor_2, Sum_exact_compressor_3, 
    Sum_FA_1, Sum_FA_2, Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA):

    # 使用 stage1 的输出进行计算
    
    # stage2_Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    stage2_Cout_FA_1 = Sum_exact_compressor_1 & Sum_FA_1 | C2 & (Sum_exact_compressor_1 | Sum_FA_1)
    
    # stage2_Sum_FA = (p1 ^ p2) ^ Cin
    stage2_Sum_FA_1 = Sum_exact_compressor_1 ^ Sum_FA_1 ^ C2


    # stage2_Cout_exact_compressor = p1 & p2 | p3 & (p1 | p2)
    stage2_Cout_exact_compressor_1 = Carry_exact_compressor_1 & Cout_FA_1 | Sum_exact_compressor_2 & (Carry_exact_compressor_1 | Cout_FA_1)
    stage2_Cout_exact_compressor_2 = Carry_exact_compressor_2 & Cout_HA   | Sum_exact_compressor_3 & (Carry_exact_compressor_2 | Cout_HA)
    stage2_Cout_exact_compressor_3 = Carry_exact_compressor_3 & Sum_FA_2  | pp[6][5] & (Carry_exact_compressor_3 | Sum_FA_2)
    stage2_Cout_exact_compressor_4 = Cout_FA_2 & pp[5][7]| pp[6][6] & (Cout_FA_2 | pp[5][7])

    # stage2_Carry_exact_compressor = ((p1 ^ p2 ^ p3) & p4) | (Cin & ((p1 ^ p2 ^ p3) | p4))
    stage2_Carry_exact_compressor_1 = (Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) & Sum_HA | stage2_Cout_FA_1 & (( Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) | Sum_HA)
    stage2_Carry_exact_compressor_2 = (Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) & pp[7][3] | stage2_Cout_exact_compressor_1 & ((Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) | pp[7][3])
    stage2_Carry_exact_compressor_3 = (Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) & pp[7][4] | stage2_Cout_exact_compressor_2 & ((Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) | pp[7][4])
    stage2_Carry_exact_compressor_4 = (Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) & pp[7][5] | stage2_Cout_exact_compressor_3 & ((Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) | pp[7][5])
    
    # stage2_Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    stage2_Cout_FA_2 = pp[6][7] & pp[7][6] | stage2_Cout_exact_compressor_4 & (pp[6][7] | pp[7][6])
    
    # stage2_Sum_FA = (p1 ^ p2) ^ Cin
    stage2_Sum_FA_2 = pp[6][7] ^ pp[7][6] ^ stage2_Cout_exact_compressor_4
    
    
    # stage2_Sum_exact_compressor = (p1 ^ p2 ^ p3) ^ p4 ^ Cin
    stage2_Sum_exact_compressor_1 = (Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) ^ Sum_HA ^ stage2_Cout_FA_1
    stage2_Sum_exact_compressor_2 = (Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) ^ pp[7][3] ^ stage2_Cout_exact_compressor_1
    stage2_Sum_exact_compressor_3 = (Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) ^ pp[7][4] ^ stage2_Cout_exact_compressor_2
    stage2_Sum_exact_compressor_4 = (Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) ^ pp[7][5] ^ stage2_Cout_exact_compressor_3

    return stage2_Sum_FA_1, stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA_2,\
    stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA_2

    
    
# 计算stage3的输出
def stage_3_calculate_output(pp, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA_2,stage2_Cout_FA_2,
                            stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4):
    
# 使用 stage2 的输出进行计算

#stage_3_Cout_HA = p1 & p2
#stage_3_Sum_HA = p1 ^ p2
    #stage3_HA
    stage_3_Cout_HA = stage2_Carry_exact_compressor_1 & stage2_Sum_exact_compressor_2
    stage_3_Sum_HA = stage2_Carry_exact_compressor_1 ^ stage2_Sum_exact_compressor_2



#stage_3_Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    stage_3_Cout_FA_1 = stage2_Carry_exact_compressor_2 & stage2_Sum_exact_compressor_3 | stage_3_Cout_HA & (stage2_Carry_exact_compressor_2 | stage2_Sum_exact_compressor_3)
    stage_3_Cout_FA_2 = stage2_Carry_exact_compressor_3 & stage2_Sum_exact_compressor_4 | stage_3_Cout_FA_1 & (stage2_Carry_exact_compressor_3 | stage2_Sum_exact_compressor_4)
    stage_3_Cout_FA_3 = stage2_Carry_exact_compressor_4 & stage2_Sum_FA_2 | stage_3_Cout_FA_2 & (stage2_Carry_exact_compressor_4 | stage2_Sum_FA_2)
    stage_3_Cout_FA_4 = stage2_Cout_FA_2 & pp[7][7] | stage_3_Cout_FA_3 & (stage2_Cout_FA_2 | pp[7][7])




#stage_3_Sum_FA = (p1 ^ p2) ^ Cin
    stage_3_Sum_FA_1 = stage2_Carry_exact_compressor_2 ^ stage2_Sum_exact_compressor_3 ^ stage_3_Cout_HA
    stage_3_Sum_FA_2 = stage2_Carry_exact_compressor_3 ^ stage2_Sum_exact_compressor_4 ^ stage_3_Cout_FA_1
    stage_3_Sum_FA_3 = stage2_Carry_exact_compressor_4 ^ stage2_Sum_FA_2 ^ stage_3_Cout_FA_2
    stage_3_Sum_FA_4 = stage2_Cout_FA_2 ^ pp[7][7] ^ stage_3_Cout_FA_3

    return stage_3_Sum_HA, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, stage_3_Sum_FA_4, stage_3_Cout_FA_4




# 计算最终输出
def final_stage4_calculate_output(stage2_Sum_FA_1, stage2_Sum_exact_compressor_1, stage_3_Sum_HA, 
                                  stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, \
                                  stage_3_Sum_FA_4, stage_3_Cout_FA_4):
    
    final_Sum = 6 + stage2_Sum_FA_1 * 2**8 + stage2_Sum_exact_compressor_1 * 2**9 + stage_3_Sum_HA * 2**10 \
                  + stage_3_Sum_FA_1 * 2**11 + stage_3_Sum_FA_2 * 2**12 + stage_3_Sum_FA_3 * 2**13 + stage_3_Sum_FA_4 * 2**14 + stage_3_Cout_FA_4 * 2**15
    return final_Sum

# 计算精确乘积
def calculate_exact_product(a, b):
    a_int = int(a, 2)
    b_int = int(b, 2)
    return a_int * b_int

# 遍历所有可能的 a 和 b 并计算结果
def generate_all_results():
    results = []
    for a_int in range(256):
        for b_int in range(256):
            a = f'{a_int:08b}'
            b = f'{b_int:08b}'
            pp = calculate_partial_products(a, b)

            C2, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, \
            Sum_exact_compressor_1, Sum_exact_compressor_2, Sum_exact_compressor_3, Sum_FA_1, Sum_FA_2, \
            Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA = stage_1_calculate_output(pp, a, b)

            stage2_Sum_FA_1, stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA_2,\
            stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA_2 \
            = stage_2_calculate_output(C2, pp, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, 
                                       Sum_exact_compressor_1,Sum_exact_compressor_2, Sum_exact_compressor_3, 
                                       Sum_FA_1, Sum_FA_2, Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA)



            stage_3_Sum_HA, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, stage_3_Sum_FA_4, stage_3_Cout_FA_4 \
            = stage_3_calculate_output(pp, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA_2,stage2_Cout_FA_2,
                                       stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4)
            
            
            final_Sum = final_stage4_calculate_output(stage2_Sum_FA_1, stage2_Sum_exact_compressor_1, stage_3_Sum_HA, 
                                  stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, \
                                  stage_3_Sum_FA_4, stage_3_Cout_FA_4)
            
            Exact = calculate_exact_product(a, b)
            Error = final_Sum - Exact
            NMSE = Error**2 / 2**32
            Mean_Error = Error / 2**16
            Error_Distance = abs(final_Sum - Exact)
            if Exact != 0:
                Relative_Error_Distance = Error_Distance / Exact
                Mean_Error_Distance = Relative_Error_Distance / 2**16
                results.append([a, b, final_Sum, Exact, Error_Distance, Relative_Error_Distance, Mean_Error_Distance, Mean_Error, NMSE])
            else:
                results.append([a, b, final_Sum, Exact, Error_Distance, None, None, Mean_Error, NMSE])
    return results

# 将结果输出到 Excel
def export_to_excel(results, filename='Sabetzadeh.xlsx'):
    df = pd.DataFrame(results, columns=['a', 'b', 'Final_Sum', 'Exact', 'Error_Distance', 'Relative_Error_Distance', 'Mean_Error_Distance', 'Mean_Error', 'NMSE'])
    df.to_excel(filename, index=False)

# 示例使用
results = generate_all_results()
export_to_excel(results)



