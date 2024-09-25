import numpy as np
import itertools

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
    # 取pp0, pp1, pp2, pp3的第6个元素（索引为5，因为我们之前反转了顺序）
    

    # 计算或门输出
    S1 = pp[0][5] | pp[1][4] | pp[2][3] | pp[3][2]
    S2 = pp[0][6] | pp[1][5] | pp[2][4] | pp[3][3]
    S3 = pp[0][7] | pp[1][6] | pp[2][5] | pp[3][4]

    C1 = pp[4][1] | pp[5][0]
    C2 = pp[4][2] | pp[5][1] | pp[6][0]
    C3 = pp[4][3] | pp[5][2] | pp[6][1] | pp[7][0]

    # Cout_exact_compressor = p1 & p2 | p3 & (p1 | p2)
    Cout_exact_compressor_1 = pp[1][7] & pp[2][6] | pp[3][5] & (pp[1][7] | pp[2][6])
    Cout_exact_compressor_2 = pp[2][7] & pp[3][6] | pp[4][5] & (pp[2][7] | pp[3][6])
    Cout_exact_compressor_3 = pp[3][7] & pp[4][6] | pp[5][5] & (pp[3][7] | pp[4][6])

    #Carry_exact_compressor = ((p1 ^ p2 ^ p3) & p4) | (Cin & ((p1 ^ p2 ^ p3) | p4))
    Carry_exact_compressor_1 = ((pp[1][7] ^ pp[2][6] ^ pp[3][5]) & pp[4][4]) | (C3 & ((pp[1][7] ^ pp[2][6] ^ pp[3][5]) | pp[4][4]))
    Carry_exact_compressor_2 = ((pp[2][7] ^ pp[3][6] ^ pp[4][5]) & pp[5][4]) | (Cout_exact_compressor_1 & ((pp[2][7] ^ pp[3][6] ^ pp[4][5]) | pp[5][4]))
    Carry_exact_compressor_3 = ((pp[3][7] ^ pp[4][6] ^ pp[5][5]) & pp[6][4]) | (Cout_exact_compressor_2 & ((pp[3][7] ^ pp[4][6] ^ pp[5][5]) | pp[6][4]))

    #Sum_exact_compressor = (p1 ^ p2 ^ p3) ^ p4 ^ Cin

    Sum_exact_compressor_1 = (pp[1][7] ^ pp[2][6] ^ pp[3][5]) ^ pp[4][4] ^ C3
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
    
    return S1, S2, S3, C1, C2, Carry_exact_compressor_1, \
    Carry_exact_compressor_2, Carry_exact_compressor_3, Sum_exact_compressor_1, \
    Sum_exact_compressor_2, Sum_exact_compressor_3, Sum_FA_1, Sum_FA_2, \
    Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA

# 计算stage2的输出
def stage_2_calculate_output(pp, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, 
    Sum_exact_compressor_2, Sum_exact_compressor_3, 
    Sum_FA_2, Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA):

    # 使用 stage1 的输出进行计算
    
    # stage2_Cout_exact_compressor = p1 & p2 | p3 & (p1 | p2)
    stage2_Cout_exact_compressor_1 = Carry_exact_compressor_1 & Cout_FA_1 | Sum_exact_compressor_2 & (Carry_exact_compressor_1 | Cout_FA_1)
    stage2_Cout_exact_compressor_2 = Carry_exact_compressor_2 & Cout_HA   | Sum_exact_compressor_3 & (Carry_exact_compressor_2 | Cout_HA)
    stage2_Cout_exact_compressor_3 = Carry_exact_compressor_3 & Sum_FA_2  | pp[6][5] & (Carry_exact_compressor_3 | Sum_FA_2)
    stage2_Cout_exact_compressor_4 = Cout_FA_2 & pp[5][7]| pp[6][6] & (Cout_FA_2 | pp[5][7])

    # stage2_Carry_exact_compressor = ((p1 ^ p2 ^ p3) & p4) | (Cin & ((p1 ^ p2 ^ p3) | p4))
    stage2_Carry_exact_compressor_1 = (Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) & Sum_HA | 0 & (( Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) | Sum_HA)
    stage2_Carry_exact_compressor_2 = (Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) & pp[7][3] | stage2_Cout_exact_compressor_1 & ((Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) | pp[7][3])
    stage2_Carry_exact_compressor_3 = (Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) & pp[7][4] | stage2_Cout_exact_compressor_2 & ((Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) | pp[7][4])
    stage2_Carry_exact_compressor_4 = (Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) & pp[7][5] | stage2_Cout_exact_compressor_3 & ((Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) | pp[7][5])
    
    # stage2_Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    stage2_Cout_FA = pp[6][7] & pp[7][6] | stage2_Cout_exact_compressor_4 & (pp[6][7] | pp[7][6])
    
    # stage2_Sum_FA = (p1 ^ p2) ^ Cin
    stage2_Sum_FA = pp[6][7] ^ pp[7][6] ^ stage2_Cout_exact_compressor_4
    
    
    # stage2_Sum_exact_compressor = (p1 ^ p2 ^ p3) ^ p4 ^ Cin
    stage2_Sum_exact_compressor_1 = (Carry_exact_compressor_1 ^ Cout_FA_1 ^ Sum_exact_compressor_2) ^ Sum_HA ^ 0
    stage2_Sum_exact_compressor_2 = (Carry_exact_compressor_2 ^ Cout_HA ^ Sum_exact_compressor_3) ^ pp[7][3] ^ stage2_Cout_exact_compressor_1
    stage2_Sum_exact_compressor_3 = (Carry_exact_compressor_3 ^ Sum_FA_2 ^ pp[6][5]) ^ pp[7][4] ^ stage2_Cout_exact_compressor_2
    stage2_Sum_exact_compressor_4 = (Cout_FA_2 ^ pp[5][7] ^ pp[6][6]) ^ pp[7][5] ^ stage2_Cout_exact_compressor_3

    return stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA,\
    stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA

    
    
# 计算stage3的输出
def stage_3_calculate_output(pp, S2, S3, C1, C2, Sum_exact_compressor_1, Sum_FA_1,
                            stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA,
                            stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA):
    
# 使用 stage2 的输出进行计算

#stage_3_Cout_HA = p1 & p2
#stage_3_Sum_HA = p1 ^ p2
    #stage3_HA1
    stage_3_Cout_HA_1 = C1 & S2
    stage_3_Sum_HA_1 = C1 ^ S2



#stage_3_Cout_FA = (p1 & p2) | Cin & (p1 | p2)
    stage_3_Cout_FA_1 = C2 & S3 | stage_3_Cout_HA_1 & (C2 | S3)
    stage_3_Cout_FA_2 = Sum_exact_compressor_1 & Sum_FA_1 | stage_3_Cout_FA_1 & (Sum_exact_compressor_1 | Sum_FA_1)
    #stage3_HA2##########################
    stage_3_Cout_HA_2 = stage2_Sum_exact_compressor_1 & stage_3_Cout_FA_2
    stage_3_Sum_HA_2 = stage2_Sum_exact_compressor_1 ^ stage_3_Cout_FA_2
    #####################################
    stage_3_Cout_FA_3 = stage2_Carry_exact_compressor_1 & stage2_Sum_exact_compressor_2 | stage_3_Cout_HA_2 & (stage2_Carry_exact_compressor_1 | stage2_Sum_exact_compressor_2)
    stage_3_Cout_FA_4 = stage2_Carry_exact_compressor_2 & stage2_Sum_exact_compressor_3 | stage_3_Cout_FA_3 & (stage2_Carry_exact_compressor_2 | stage2_Sum_exact_compressor_3)
    stage_3_Cout_FA_5 = stage2_Carry_exact_compressor_3 & stage2_Sum_exact_compressor_4 | stage_3_Cout_FA_4 & (stage2_Carry_exact_compressor_3 | stage2_Sum_exact_compressor_4)
    stage_3_Cout_FA_6 = stage2_Carry_exact_compressor_4 & stage2_Sum_FA | stage_3_Cout_FA_5 & (stage2_Carry_exact_compressor_4 | stage2_Sum_FA)
    stage_3_Cout_FA_7 = stage2_Cout_FA & pp[7][7] | stage_3_Cout_FA_6 & (stage2_Cout_FA | pp[7][7])

#stage_3_Sum_FA = (p1 ^ p2) ^ Cin
    stage_3_Sum_FA_1 = C2 ^ S3 ^ stage_3_Cout_HA_1
    stage_3_Sum_FA_2 = Sum_exact_compressor_1 ^ Sum_FA_1 ^ stage_3_Cout_FA_1
    stage_3_Sum_FA_3 = stage2_Carry_exact_compressor_1 ^ stage2_Sum_exact_compressor_2 ^ stage_3_Cout_HA_2
    stage_3_Sum_FA_4 = stage2_Carry_exact_compressor_2 ^ stage2_Sum_exact_compressor_3 ^ stage_3_Cout_FA_3
    stage_3_Sum_FA_5 = stage2_Carry_exact_compressor_3 ^ stage2_Sum_exact_compressor_4 ^ stage_3_Cout_FA_4
    stage_3_Sum_FA_6 = stage2_Carry_exact_compressor_4 ^ stage2_Sum_FA ^ stage_3_Cout_FA_5
    stage_3_Sum_FA_7 = stage2_Cout_FA ^ pp[7][7] ^ stage_3_Cout_FA_6

    return stage_3_Sum_HA_1, stage_3_Sum_HA_2, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, \
           stage_3_Sum_FA_4, stage_3_Sum_FA_5, stage_3_Sum_FA_6, stage_3_Sum_FA_7, stage_3_Cout_FA_7




# 计算最终输出
def final_stage4_calculate_output(S1, stage_3_Sum_HA_1, stage_3_Sum_HA_2, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, \
           stage_3_Sum_FA_4, stage_3_Sum_FA_5, stage_3_Sum_FA_6, stage_3_Sum_FA_7, stage_3_Cout_FA_7, a, b, truncation_scheme):
    
    fixed_value = 0
    for i, bit in enumerate(truncation_scheme):
        if bit == 'a4':
            fixed_value |= (int(a[3]) << (4-i))
        elif bit == 'a3':
            fixed_value |= (int(a[4]) << (4-i))
        elif bit == 'a2':
            fixed_value |= (int(a[5]) << (4-i))
        elif bit == 'a1':
            fixed_value |= (int(a[6]) << (4-i))
        elif bit == 'a0':
            fixed_value |= (int(a[7]) << (4-i))
        elif bit == 'b4':
            fixed_value |= (int(b[3]) << (4-i))
        elif bit == 'b3':
            fixed_value |= (int(b[4]) << (4-i))
        elif bit == 'b2':
            fixed_value |= (int(b[5]) << (4-i))
        elif bit == 'b1':
            fixed_value |= (int(b[6]) << (4-i))
        elif bit == 'b0':
            fixed_value |= (int(b[7]) << (4-i))
        elif bit == '1':
            fixed_value |= (1 << (4-i))
    
    final_Sum = fixed_value + S1 * 2**5 + stage_3_Sum_HA_1 * 2**6 + stage_3_Sum_FA_1 * 2**7 + stage_3_Sum_FA_2 * 2**8 + stage_3_Sum_HA_2 * 2**9 \
    + stage_3_Sum_FA_3 * 2**10 + stage_3_Sum_FA_4 * 2**11 + stage_3_Sum_FA_5 * 2**12 + stage_3_Sum_FA_6 * 2**13 + stage_3_Sum_FA_7 * 2**14 + stage_3_Cout_FA_7 * 2**15
    return final_Sum

# 计算精确乘积
def calculate_exact_product(a, b):
    a_int = int(a, 2)
    b_int = int(b, 2)
    return a_int * b_int

def calculate_metrics(truncation_scheme):
    total_error_distance = 0
    total_relative_error = 0
    count_non_zero = 0
    max_error_distance = 0

    for a_int in range(256):
        for b_int in range(256):
            a = f'{a_int:08b}'
            b = f'{b_int:08b}'
            pp = calculate_partial_products(a, b)
            S1, S2, S3, C1, C2, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, Sum_exact_compressor_1, Sum_exact_compressor_2, Sum_exact_compressor_3, Sum_FA_1, Sum_FA_2, Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA = stage_1_calculate_output(pp, a, b)
            stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA, stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA = stage_2_calculate_output(pp, Carry_exact_compressor_1, Carry_exact_compressor_2, Carry_exact_compressor_3, Sum_exact_compressor_2, Sum_exact_compressor_3, Sum_FA_2, Cout_FA_1, Cout_FA_2, Cout_HA, Sum_HA)
            stage_3_Sum_HA_1, stage_3_Sum_HA_2, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, stage_3_Sum_FA_4, stage_3_Sum_FA_5, stage_3_Sum_FA_6, stage_3_Sum_FA_7, stage_3_Cout_FA_7 = stage_3_calculate_output(pp, S2, S3, C1, C2, Sum_exact_compressor_1, Sum_FA_1, stage2_Sum_exact_compressor_1, stage2_Sum_exact_compressor_2, stage2_Sum_exact_compressor_3, stage2_Sum_exact_compressor_4, stage2_Sum_FA, stage2_Carry_exact_compressor_1, stage2_Carry_exact_compressor_2, stage2_Carry_exact_compressor_3, stage2_Carry_exact_compressor_4, stage2_Cout_FA)
            final_Sum = final_stage4_calculate_output(S1, stage_3_Sum_HA_1, stage_3_Sum_HA_2, stage_3_Sum_FA_1, stage_3_Sum_FA_2, stage_3_Sum_FA_3, stage_3_Sum_FA_4, stage_3_Sum_FA_5, stage_3_Sum_FA_6, stage_3_Sum_FA_7, stage_3_Cout_FA_7, a, b, truncation_scheme)
            Exact = calculate_exact_product(a, b)
            Error_Distance = abs(final_Sum - Exact)
            total_error_distance += Error_Distance
            max_error_distance = max(max_error_distance, Error_Distance)
            if Exact != 0:
                Relative_Error = Error_Distance / Exact
                total_relative_error += Relative_Error
                count_non_zero += 1

    NMED = total_error_distance / (256 * 256 * 255 *255)
    MRED = total_relative_error / count_non_zero

    return NMED, MRED, max_error_distance

def generate_all_schemes():
    schemes = []
    inputs = ['a4', 'a3', 'a2', 'a1', 'a0', 'b4', 'b3', 'b2', 'b1', 'b0', '0', '1']
    
    for r in range(1, 6):  # 从选择1个到选择5个
        for combo in itertools.combinations(inputs, r):
            remaining = 5 - r
            if remaining > 0:
                for padding in itertools.product(['0', '1'], repeat=remaining):
                    scheme = list(combo) + list(padding)
                    schemes.append(scheme)
            else:
                schemes.append(list(combo))
    
    return schemes

# 主程序
schemes = generate_all_schemes()
results = []

for i, scheme in enumerate(schemes):
    nmed, mred, max_error = calculate_metrics(scheme)
    results.append((scheme, nmed, mred, max_error))
    print(f"方案 {i+1}: {scheme}")
    print(f"  NMED: {nmed:.6e}")
    print(f"  MRED: {mred:.6e}")
    print(f"  最大误差: {max_error}")
    print()

# 找出最佳NMED和MRED配置
best_nmed = min(results, key=lambda x: x[1])
best_mred = min(results, key=lambda x: x[2])

print(f"最佳NMED配置: {best_nmed[0]}, NMED: {best_nmed[1]:.6e}")
print(f"最佳MRED配置: {best_mred[0]}, MRED: {best_mred[2]:.6e}")
