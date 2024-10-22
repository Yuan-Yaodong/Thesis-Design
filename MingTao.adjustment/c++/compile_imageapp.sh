#!/bin/bash

# 使用 pkg-config 获取 OpenCV 的编译和链接标志
OPENCV_CFLAGS=$(pkg-config --cflags opencv4)
OPENCV_LIBS=$(pkg-config --libs opencv4)

# 设置 Verilator 对象目录和包含目录
VERILATOR_OBJ_DIR="./obj_dir"
VERILATOR_INCLUDE_DIR="/usr/local/share/verilator/include"

# verilated.cpp 和其他必要文件的路径
VERILATED_CPP="$VERILATOR_INCLUDE_DIR/verilated.cpp"
VERILATED_THREADS_CPP="$VERILATOR_INCLUDE_DIR/verilated_threads.cpp"
VERILATED_TIMING_CPP="$VERILATOR_INCLUDE_DIR/verilated_timing.cpp"

# 检查必要文件是否存在
for file in "$VERILATED_CPP" "$VERILATED_THREADS_CPP" "$VERILATED_TIMING_CPP"; do
    if [ ! -f "$file" ]; then
        echo "Error: $file not found"
        exit 1
    fi
done

# 编译命令
clang++ -std=c++20 \
    $OPENCV_CFLAGS \
    -I$VERILATOR_OBJ_DIR \
    -I$VERILATOR_INCLUDE_DIR \
    image_application.cpp \
    $VERILATOR_OBJ_DIR/VMingtao_hybrid__ALL.cpp \
    $VERILATED_CPP \
    $VERILATED_THREADS_CPP \
    $VERILATED_TIMING_CPP \
    -o image_application \
    $OPENCV_LIBS \
    -lpthread

# 检查编译是否成功
if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable 'image_application' created."
else
    echo "Compilation failed."
fi