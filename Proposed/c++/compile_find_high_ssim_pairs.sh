#!/bin/bash

# 设置 Verilog 文件的目录
VERILOG_DIR="../verilog"

# 编译 Verilog 模型
verilator -Wall --cc $VERILOG_DIR/optimized_approximate_multiplier_8x8.v \
    -I$VERILOG_DIR \
    --exe find_high_ssim_pairs.cpp \
    -CFLAGS "$(pkg-config opencv4 --cflags)" \
    -LDFLAGS "$(pkg-config opencv4 --libs)"

# 编译 C++ 代码
make -C obj_dir -f Voptimized_approximate_multiplier_8x8.mk Voptimized_approximate_multiplier_8x8

# 移动可执行文件到当前目录
mv obj_dir/Voptimized_approximate_multiplier_8x8 find_high_ssim_pairs