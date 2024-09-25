import os

# 文件路径
input_file = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K/high_ssim_pairs.txt"
output_file = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K/high_ssim_pairs_cleaned.txt"

# 读取文件并处理每一行
with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
    for line in infile:
        # 分割行并只保留前两个元素（文件路径）
        parts = line.strip().split()
        if len(parts) >= 2:
            # 写入处理后的行
            outfile.write(f"{parts[0]} {parts[1]}\n")

print(f"处理完成。结果已保存到 {output_file}")

# 如果你想直接覆盖原文件，取消下面的注释
# os.replace(output_file, input_file)
# print(f"原文件已被更新")