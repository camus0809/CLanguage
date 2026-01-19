#include <stdio.h>

int main(void)
{
  /*
  // #1. /
  int a = 7;
  printf("%d\n", a / 2);
  printf("%.1f\n", a / 2.0);
  */

  /* 
  // #2. % 
  int a = 7;
  printf("%d\n", a % 2);
  */
 
  /*
  // #3. !
  int flag = 1;
  if(!flag){
    printf("Haha\n");
  }
  */

  /*
  // #4. sizeof
  int a = 10;
  printf("%d\n", sizeof(a));
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof a);
  // printf("%d\n", sizeof int); //  错误，类型不能
  //
  int arr[10] = {0};
  printf("%d\n", sizeof arr); //  40 计算的是整个数组的大小，单位是字节 
  */

  // #5. &&
  int a = 10;
  int b = 20;
  if(a && b){
    printf("hehe\n");
  }
  return 0;
}
