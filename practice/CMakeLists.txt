cmake_minimum_required(VERSION 3.25)
project(constant)

# 1. 查找当前目录下所有的 .c 文件，并将列表保存到 SRC_FILES 变量中
file(GLOB SRC_FILES "*.c")

# 2. 遍历每一个源文件
foreach(FILE ${SRC_FILES})
    # 获取文件名（不带路径和后缀），例如 "01_data_type"
    get_filename_component(EXEC_NAME ${FILE} NAME_WE)

    # 打印消息（可选，方便调试看到正在编译什么）
    message(STATUS "Adding executable: ${EXEC_NAME}")

    # 3. 创建可执行文件：名为 01_data_type，源码为 01_data_type.c
    add_executable(${EXEC_NAME} ${FILE})
endforeach()
