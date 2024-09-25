#!/bin/bash

# 设置目录路径
DIR="./"
TEMP_DIR="./temp_removed_files"

# 创建临时目录
mkdir -p "$TEMP_DIR"

# 允许的尺寸
ALLOWED_SIZES=(
    "2040x1356"
    # "1356x2040"
    # "1536x2040"
    # "2040x1536"
    # "2040x2040"
)

# 计数器
kept_count=0
moved_count=0

# 确认函数
confirm() {
    read -p "这将移动不符合条件的文件。是否继续？ (y/n) " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]
    then
        exit 1
    fi
}

# 请求用户确认
confirm

# 遍历目录中的所有 PNG 文件
for file in "$DIR"/*.png; do
    # 获取图片尺寸
    size=$(sips -g pixelHeight -g pixelWidth "$file" | awk '/pixelHeight/{height=$2} /pixelWidth/{width=$2} END{print width "x" height}')
    
    # 检查尺寸是否在允许列表中
    if [[ " ${ALLOWED_SIZES[@]} " =~ " ${size} " ]]; then
        ((kept_count++))
    else
        echo "移动: $file (尺寸: $size)"
        mv "$file" "$TEMP_DIR/"
        ((moved_count++))
    fi
done

echo "总结:"
echo "保留的图片数量: $kept_count"
echo "移动的图片数量: $moved_count"
echo "移动的文件位于: $TEMP_DIR"