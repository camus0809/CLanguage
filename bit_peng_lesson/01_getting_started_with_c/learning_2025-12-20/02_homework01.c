#include <stdio.h>

int main(void)
{
  /*
  // #1. 求两个数的较大值
  int a;
  int b;
  printf("Input a and b: ");
  scanf("%d %d", &a, &b);

  printf("%d\n", a > b ? a : b);
  */

  // #2. 计算y的值
  int x;
  int y;
  printf("Input x: ");

  scanf("%d", &x);

  if(x < 0){
    y = 1;
  }else{
    y = -1;
  }
  printf("%d\n", y);
  return 0;
}
