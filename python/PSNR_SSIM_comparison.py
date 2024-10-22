import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

# 读取数据
data = pd.read_csv('synthesis_results.csv', skiprows=1)

# 将所有相关列转换为数值类型
numeric_columns = ['PSNR(dB)', 'SSIM(%)', 'PDAP(pJ·μm²)', 'PDP (f J)']
for col in numeric_columns:
    data[col] = pd.to_numeric(data[col], errors='coerce')

# 创建图表
fig, axs = plt.subplots(2, 2, figsize=(12, 12))
fig.suptitle('设计权衡对比', fontsize=16)

# 定义标记和颜色
markers = ['o', 's', '^', 'D', 'v', '>', '<', 'p', '*', 'h', 'H', '+', 'x', 'd']
colors = plt.cm.Set3(np.linspace(0, 1, len(data)))

# 设置子图
subplots = [
    ('PSNR(dB)', 'PDAP(pJ·μm²)', 50, 62, 0, 30, '(a) PSNR vs PADP'),
    ('SSIM(%)', 'PDAP(pJ·μm²)', 99.5, 100, 0, 30, '(b) SSIM vs PADP'),
    ('PSNR(dB)', 'PDP (f J)', 50, 62, 25, 65, '(c) PSNR vs PDP'),
    ('SSIM(%)', 'PDP (f J)', 99.5, 100, 25, 65, '(d) SSIM vs PDP')
]

for i, (x_col, y_col, x_min, x_max, y_min, y_max, title) in enumerate(subplots):
    ax = axs[i//2, i%2]
    ax.set_title(title)
    ax.set_xlabel(x_col)
    ax.set_ylabel(y_col)
    ax.set_xlim(x_min, x_max)
    ax.set_ylim(y_min, y_max)
    
    for j, (index, row) in enumerate(data.iterrows()):
        if row['Design'] != 'Exact' and pd.notna(row[x_col]) and pd.notna(row[y_col]):
            marker = markers[j % len(markers)]
            color = colors[j]
            ax.scatter(row[x_col], row[y_col], marker=marker, color=color)
            ax.annotate(row['Design'], (row[x_col], row[y_col]), xytext=(5,5), textcoords='offset points')

plt.tight_layout()
plt.savefig('design_tradeoffs.png', dpi=300, bbox_inches='tight')
plt.show()

# 计算相关系数
data_without_exact = data[data['Design'] != 'Exact']
correlations = {
    'PADP vs PSNR': np.corrcoef(data_without_exact['PDAP(pJ·μm²)'], data_without_exact['PSNR(dB)'])[0, 1],
    'PADP vs SSIM': np.corrcoef(data_without_exact['PDAP(pJ·μm²)'], data_without_exact['SSIM(%)'])[0, 1],
    'PDP vs PSNR': np.corrcoef(data_without_exact['PDP (f J)'], data_without_exact['PSNR(dB)'])[0, 1],
    'PDP vs SSIM': np.corrcoef(data_without_exact['PDP (f J)'], data_without_exact['SSIM(%)'])[0, 1]
}

for comparison, correlation in correlations.items():
    print(f"{comparison}的相关系数: {correlation:.4f}")