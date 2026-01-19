cmake_minimum_required(VERSION 3.15)
project(C_Primer_Plus_Chapter2 C) # 指定语言为 C

# ==========================================
# 1. 编译配置
# ==========================================
# 设置 C 标准为 C11
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 开启更多警告，这对学习C语言非常重要！
# -Wall: 开启大部分警告
# -Wextra: 开启额外警告
# -g: 保留调试信息（方便你用 gdb 或 VSCode 调试）
add_compile_options(-Wall -Wextra -g)

# ==========================================
# 2. 自动化构建函数
# ==========================================
# 定义一个宏，用来批量处理指定目录下的所有 .c 文件
macro(add_executables_from_dir dir_name)
    # 1. 搜索该目录下所有的 .c 文件，存入 source_files 变量
    file(GLOB source_files "${dir_name}/*.c")

    # 2. 遍历每一个找到的文件
    foreach(src_file ${source_files})
        # 3. 获取文件名（不带路径和后缀），例如 "example_2_1"
        get_filename_component(target_name ${src_file} NAME_WE)
        
        # 4. 自动创建可执行文件
        # 生成的目标名就是文件名，例如 ./build/example_2_1
        add_executable(${target_name} ${src_file})
        
        message(STATUS "Auto-added target: ${target_name}")
    endforeach()
endmacro()

# ==========================================
# 3. 调用自动构建
# ==========================================

# 自动扫描 examples 文件夹
add_executables_from_dir("examples")

# 自动扫描 review 文件夹
add_executables_from_dir("review")

# 自动扫描 exercises 文件夹
add_executables_from_dir("exercises")
