// 把2音寻转换为英寸
#include <stdio.h>
int main(void)
{
	int feet, fathoms;	// 定义英寸和音寻
	
	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", fathoms);	

	return 0;
}
/*
英寻是一种英美长度单位，1英寻为6英尺，约合1.8288米；不属于国际单位制。英寻（英语：Fathom）来自古英语“Fæthm”，表示“伸展开的双臂”，因而一英寻也就是两臂之长。如今这个单位的使用被严格限制在海洋测量中，特别是使用准绳测量水体深度的情况下。从前英语国家的海图普遍使用“英寻”作为深度的单位，然而现在这种情况也在逐渐改变，甚至在美国也开始使用公制作为单位。
*/
