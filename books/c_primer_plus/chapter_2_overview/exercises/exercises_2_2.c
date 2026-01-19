// 打印我的姓名和地址
#include <stdio.h>

int main(void)
{
	char* myAddress = NULL;	// 定义一个变量存储我的地址
	char* myName = NULL;		// 定以一个变量存储我的姓名

	myAddress = "fandouPark";	// 将我的地址”翻斗公园“赋值为myAddress
	myName = "camus";	// 将我的名字”camus“赋值给myName

	// 打印相关输出
	printf("My name is %s.\n", myName);
	printf("My address is %s.\n", myAddress);

	return 0;
}
