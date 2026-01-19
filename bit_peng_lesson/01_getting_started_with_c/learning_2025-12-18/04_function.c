#include <stdio.h>
/* 
 * 求两个任意整数的和 
 *  
 */
int add(int, int);
int main(void)
{
  int num1;
  int num2;
  int res = 0;
  // #1. 输入两个任意整数
  printf("please input num1 and num2:\n");
  scanf("%d %d", &num1, &num2); 
  // #2. 对这两个整数进行加运算
  res = add(num1, num2);
  // #3. 输入两个任意整数的和
  printf("num1 + num2 = %d\n", res);
  return 0;
}

int add(int a, int b)
{
  return a + b;
}
