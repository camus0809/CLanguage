#include <stdio.h>
// 引用输入输出标准头文件 包含scan()、printf()

int main(void)
{
	int dogs; // 创建一个dogs变量，用于接收用户输入和后续输出
	
	printf("How much dogs do you have?\n"); // 提示用户输入
	scanf("%d", &dogs);	// 接收用户输入的数据存入变量dogs
	if(dogs == 1) 
	{
		printf("So you have %d dog!\n", dogs); // 当dogs数量为1时，dog应使用单数形式
	}else{	
		printf("So you have %d dogs!\n", dogs); // 当dogs数量大于1时，dog应使用复数形式
	}
	getchar(); // 防止程序执行完直接退出程序，该行实现直到用户有操作后再退出程序
	return 0; // 表示程序成功执行并正常退出 0是一个退出状态码
}
