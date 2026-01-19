#!/bin/bash
mkdir -p bin
# 将 build 中没有扩展名的文件（通常是 Linux 可执行文件）移动到 bin
find build -maxdepth 1 -type f ! -name "*.*" -exec mv {} bin/ \;
rm -rf bin/Makefile
# 清空 build
rm -rf build/*
echo "Executables moved to bin/, build directory cleaned."
