// 调用函数完成打印
#include <stdio.h>

void one_three(void);	// 自定义函数one_three声明
void two(void);			// 自定义函数two声明

int main(void)
{
	// 按照题示期望输出打印与调用函数
	printf("starting now:\n");
	one_three();
	printf("done!\n");

	return 0;
} 
// 自定义one_three函数用于打印one two three
void one_three(void)
{
	printf("one\n");
	two();	// 调用two函数打印"two"
	printf("three\n");
}
// 自定义two函数用于打印two
void two(void)
{
	printf("two\n");
}
