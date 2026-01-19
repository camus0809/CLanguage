#!/bin/bash

# 遇到错误立即停止脚本
set -e

# 定义目录变量
BUILD_DIR="build"
APP_DIR="app"

# 1. 准备输出目录 (每次清理 app 目录，保证里面是最新的)
rm -rf "$APP_DIR"
mkdir -p "$APP_DIR"

# 2. 运行 CMake 配置 (如果 build 不存在会自动创建)
# -B 指定构建目录
cmake -B "$BUILD_DIR"

# 3. 执行编译
# --build 是通用的编译命令，比直接调用 make 更好
cmake --build "$BUILD_DIR"

# 4. 将生成的可执行文件移动到 app 目录
# 解释：find 命令查找 build 目录下所有具有可执行权限的文件，排除目录和 CMake 自身生成的脚本
# 注意：Mac/Linux 下可执行文件通常没有后缀
echo "正在移动可执行文件..."
find "$BUILD_DIR" -maxdepth 1 -type f -perm /111 -not -name "CMake*" -not -name "Makefile" -exec cp {} "$APP_DIR" \;

# 5. (可选) 如果运行脚本时带了参数，尝试运行对应的程序
# 用法示例: ./executable.sh 01
if [ -n "$1" ]; then
  # 模糊匹配找到对应的程序
  TARGET=$(find "$APP_DIR" -name "*$1*" -type f | head -n 1)
  if [ -n "$TARGET" ]; then
    echo "----------------------------------------"
    echo "Running: $TARGET"
    echo "----------------------------------------"
    "$TARGET"
  else
    echo "未找到包含 '$1' 的可执行文件。"
  fi
else
  echo "编译完成！可执行文件已存放于 $APP_DIR/ 目录下。"
  echo "你可以运行 ./executable.sh <文件名片段> 来执行它。"
  # 列出生成的文件供查看
  ls -1 "$APP_DIR"
fi

rm -rf build/*
