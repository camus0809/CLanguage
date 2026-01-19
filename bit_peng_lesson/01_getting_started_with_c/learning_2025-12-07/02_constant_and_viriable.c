#include <stdio.h>

int main(void)
{
  /*
  short age = 20;       // 定义年龄为20
  int high = 180;       // 定义身高为180
  float weight = 88.5;  // 定义体重为88.5
  */

  //  计算两个整数的和
  int num1 = 0;
  int num2 = 0;
  int res; 
  //  输入两个整数的值
  scanf("%d %d", &num1, &num2);
  //  求和
  res = num1 + num2;
  //  输出
  printf("num1 + num2 = %d\n", res);
  return 0;
}
