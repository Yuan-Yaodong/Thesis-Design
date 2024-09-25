def extract_first_filename(line):
    return line.split()[0].split('/')[-1]

def compare_files(file1_path, file2_path):
    # 读取 image_pairings.txt
    with open(file1_path, 'r') as f:
        file1_names = set(extract_first_filename(line) for line in f)

    # 读取 high_ssim_pairs.txt
    with open(file2_path, 'r') as f:
        file2_names = set(extract_first_filename(line) for line in f)

    # 找出缺失的文件名
    missing_files = file1_names - file2_names

    print(f"在 {file1_path} 中存在但在 {file2_path} 中缺失的文件：")
    for file in sorted(missing_files):
        print(file)
    print(f"\n总共缺失 {len(missing_files)} 个文件。")

# 使用脚本
file1_path = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K/image_pairings.txt"
file2_path = "/Users/yuanyaodong/Documents/GitHubRepos/Thesis-Design/DIV2K/high_ssim_pairs_cleaned.txt"
compare_files(file1_path, file2_path)