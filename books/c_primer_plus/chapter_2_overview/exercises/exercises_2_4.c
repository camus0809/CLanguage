// 调用jolly()函数
#include <stdio.h>

void jolly();	// 声明jolly函数
void deny();	// 声明deny函数

int main(void)
{
	// 根据期望输出调用相关函数
	jolly();	
	jolly();
	jolly();
	deny();
	return 0;
}

// 自定义jolly函数用于打印"For he's a jolly good fellow!"
void jolly()
{
	printf("For he's a jolly good fellow!\n");
}

// 自定义deny函数用于打印"Which nobody can deny!"
void deny()
{
	printf("Which nobody can deny!\n");
}
