import pandas as pd
import itertools

# 定义逻辑函数
def calculate_outputs(p1, p2, p3, p4, Cin):
    Cout = p1 & p2 | p3 & (p1 | p2)
    Carry = ((p1 ^ p2 ^ p3) & p4) | (Cin & ((p1 ^ p2 ^ p3) | p4))
    Sum = (p1 ^ p2 ^ p3) ^ p4 ^ Cin
    Exact = sum([p1, p2, p3, p4, Cin])
    return Cout, Carry, Sum, Exact

# 生成所有 32 种输入组合
inputs = list(itertools.product([0, 1], repeat=5))

# 计算每个输入组合的输出
results = []
for p1, p2, p3, p4, Cin in inputs:
    Cout, Carry, Sum, Exact = calculate_outputs(p1, p2, p3, p4, Cin)
    results.append([p1, p2, p3, p4, Cin, Cout, Carry, Sum, Exact])

# 创建 DataFrame
columns = ['p1', 'p2', 'p3', 'p4', 'Cin', 'Cout', 'Carry', 'Sum', 'Exact']
df = pd.DataFrame(results, columns=columns)

# 将结果输出到 Excel 文件
df.to_excel('Exact_4-2_output.xlsx', index=False)

print("结果已保存到 Exact_4-2_output.xlsx")