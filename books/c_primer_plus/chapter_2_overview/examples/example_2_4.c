// 用与debug的程序
#include <stdio.h>

int main(void)
// ( // 1. main()函数的函数体应有{} 而非 ()包含
{
	// int n, int n2, int n3;	// 定义多个变量要么只写一次类型，要么分开多行写并使用;分隔
	// method 1 定义为一行
	// int n, n2, n3;
	// method 2 定义为多行
	int n;
	int n2;
	int n3;
// ------------------- 上述为语法错误，下面为逻辑/语义错误 ------------------
	n = 5;
	n2 = n * n;
	// n3 = n2 * n2; // 这里定义应为n的立方，但计算的值为n^4
	n3 = n2 * n;
	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
// )
}
