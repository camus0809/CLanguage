cmake_minimum_required(VERSION 3.25)
project(1221)

# 1. 指定公共源码文件（不含 main 函数的文件）
set(COMMON_SRC "00_variable.c")

# 2. 查找当前目录下所有的 .c 文件
file(GLOB SRC_FILES "*.c")

# 3. 遍历每一个源文件
foreach(FILE ${SRC_FILES})
    # 获取文件名（不带路径和后缀），例如 "01_typedef_and_static"
    get_filename_component(EXEC_NAME ${FILE} NAME_WE)
    # 获取带后缀的文件名，例如 "00_variable.c"
    get_filename_component(FILE_NAME ${FILE} NAME)

    # --- 关键修改：如果是公共文件，跳过，不让它单独生成可执行文件 ---
    if(${FILE_NAME} STREQUAL "00_variable.c")
        continue()
    endif()

    # 4. 创建可执行文件：将当前的 .c 文件和公共的 00_variable.c 一起编译
    # 这样 EXEC_NAME 就能找到 00_variable.c 里的 g_val 和 Add 函数了
    add_executable(${EXEC_NAME} ${FILE} ${COMMON_SRC})

    message(STATUS "Adding executable: ${EXEC_NAME} (linked with ${COMMON_SRC})")
endforeach()
