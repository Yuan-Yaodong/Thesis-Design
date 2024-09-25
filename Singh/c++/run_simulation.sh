#!/bin/bash

# 清理旧的构建文件
rm -rf obj_dir

# 使用 Verilator 编译 Verilog 和 C++ 文件
# verilator -Wall --cc --exe sim_main.cpp my_approximate_multiplier_8x8.v

# 使用 Verilator 编译 Verilog 和 C++ 文件
# verilator -Wall --cc --exe  sim_optimized_main.cpp MUL4.v
# verilator -Wall --cc MUL4.v --exe sim_MUL4_single_test.cpp -I../verilog
verilator -Wall --cc ../verilog/AFA_MUL4.v --exe sim_AFA_MUL4_main.cpp -I../verilog

# 进入生成的目录
cd obj_dir

# 构建可执行文件
make -j -f VAFA_MUL4.mk VAFA_MUL4   

# 运行仿真
./VAFA_MUL4

# 返回到原始目录
cd ..