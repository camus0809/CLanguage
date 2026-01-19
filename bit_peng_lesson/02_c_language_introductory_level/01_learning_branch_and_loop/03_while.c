#include <stdio.h>

int main(void)
{
  // int i = 0;
  // while(i++ < 10){
  //   if(5 == i) continue;
  //   printf("%d ", i);
  // }
  // printf("\n");
  

  // int ch = 0;
  // while((ch = getchar()) != EOF){
  //   putchar(ch);
  // }
  // getchar();
  

  // # 只打印数字
  char ch = '0';
  while((ch = getchar()) != EOF){
    if(ch < '0' | ch > '9')
      continue;
    putchar(ch);
  }
  return 0;
}
