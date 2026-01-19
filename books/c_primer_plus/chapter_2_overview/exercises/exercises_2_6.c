// 打印toes、toes的两倍、toes的平方的值
#include <stdio.h>

int main(void)
{
	int toes;	// 创建整型变量toes用于存储toes的值
	int toesDouble;	// 创建整型变量toesDouble用于存储两倍toes的值
	int toesSquare;	// 创建整型变量toesSquare用于存储toes的平方的值

	
	toes = 10;	// 将10赋值给toes
	toesDouble = 2 * toes;	// 更具运算法则将2 * toes 赋值给toesDouble
	toesSquare = toes * toes;	// 更具运算法则将toes * toes 赋值给toesSquare

	// 将一定的描述和需要的数值输出
	printf("toes = %d, 2 * toes = %d, toes * toes = %d\n", toes, toesDouble, toesSquare);
	
	return 0;
}
