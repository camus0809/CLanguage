#include <stdio.h>

int main(void)
{
  // if(3 == 5){
  //   printf("hehe\n");
  // }else{
  //   printf("haha\n");
  // }

  // int age = 10;
  // if(age > 18 ){
  //   printf("成年\n");
  // }else{
  //   printf("未成年\n");
  // }

  // int age = 10;
  // if( age < 18 ){
  //   printf("青少年\n");
  // }else if( age < 28 && age >= 18 ){
  //   printf("青年\n");
  // }else if( age < 48 && age >= 28 ){
  //   printf("中年\n");
  // }else if( age < 60 && age >= 48 ){
  //   printf("壮年\n");
  // }else{
  //   printf("老年\n");
  // }

  // int num = 3;
  // if(5 == num ){ // if( num == 5)
  //   printf("haha\n");
  // }
  //

  // #1. 练习：判断一个数是否为奇数
  // int num;
  // printf("Input num:");
  // scanf("%d", &num);
  //
  // if(1 == num % 2){
  //   printf("%d 是奇数\n", num);
  // }


  // #2. 练习：输出1-100之间的奇数 
  int i = 1;
  for( ; i <= 100; i++){
    if(1 == i % 2){
      printf("%d\t\t", i);
    }
  }
  printf("\n");
  return 0;
}
