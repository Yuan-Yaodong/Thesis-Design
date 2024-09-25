#!/bin/bash

# 清理旧的构建文件
rm -rf obj_dir


# 使用 Verilator 编译 Verilog 和 C++ 文件
# verilator -Wall --cc Mingtao_hybrid.v --exe sim_Mingtao_hybrid_single_test.cpp -I../verilog
verilator -Wall --cc ../verilog/Mingtao_hybrid.v --exe sim_Mingtao_hybrid_main.cpp -I../verilog

# 进入生成的目录
cd obj_dir

# 构建可执行文件
make -j -f VMingtao_hybrid.mk VMingtao_hybrid

# 运行仿真
./VMingtao_hybrid

# 返回到原始目录
cd ..