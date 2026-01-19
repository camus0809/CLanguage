#include <stdio.h>

int main(void)
{
  // int flag = 0;
  // printf("Join the bit!\n");
  // printf("good good study(0\\1)\n"); 
  // scanf("%d", &flag);
  // if(flag == 1){
  //   printf("%s\n", "enjoying");
  // }else{
  //   printf("failure\n");
  // } 
  int line = 0;
  printf("join bit\n");
  while((line++)< 2000){
    printf("------ write code: %d ---------\n", line);
  }
  if(line >= 2000){
    printf("good job.\n");
  }else{
    printf("keep doing.\n");
  }
  return 0;
}
