// 调用微笑函数
#include <stdio.h>

void smile();	// 自定义函数smile声明
int main(void)
{
	// 根据期望输出调用函数打印
	smile();
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	return 0;
}

// 自定义函数用于打印"Smile!"
void smile()
{
	printf("Smile!");
}
