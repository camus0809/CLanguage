// 按照题示打印
#include <stdio.h>

void br();	// 自定义br函数用于后续打印
void ic();	// 自定义ic函数用于后续打印

int main(void)
{
	// 根据期望输出而调用函数和打印换行字符
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();

	return 0;
}


// 自定义函数用于打印"Brazil, Russia"
void br()
{
	printf("Brazil, Russia");
}

// 自定义函数用于打印"India, China"
void ic()
{
	printf("India, China");
}
