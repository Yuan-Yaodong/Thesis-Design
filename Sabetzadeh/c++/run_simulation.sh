#!/bin/bash

# 清理旧的构建文件
rm -rf obj_dir

# 使用 Verilator 编译 Verilog 和 C++ 文件
# verilator -Wall --cc --exe sim_main.cpp my_approximate_multiplier_8x8.v

# 使用 Verilator 编译 Verilog 和 C++ 文件
# verilator -Wall --cc --exe  sim_optimized_main.cpp optimized_approximate_multiplier_8x8.v
# verilator -Wall --cc ../verilog/Sabetzadeh.v --exe sim_Sabetzadeh_single_test.cpp -I../verilog
verilator -Wall --cc ../verilog/Sabetzadeh.v --exe sim_Sabetzadeh_main.cpp -I../verilog

# 进入生成的目录
cd obj_dir

# 构建可执行文件
make -j -f VSabetzadeh.mk VSabetzadeh

# 运行仿真
./VSabetzadeh

# 返回到原始目录
cd ..