#include <stdio.h>
int sum(int );
int main(void)
{
  // #1 整型字符转换
  // int array[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
  // int i;
  //
  // for(i = 0; i < (sizeof(array)/sizeof(array[0])); i ++){
  //   printf("%c", array[i]);
  // }
  // printf("\n");


  // #2 出生日期输入输出
  // // method 1 
  // char total[8];
  // scanf("%s", total);
  //
  // printf("%.4s\n", total);
  // printf("%c%c\n", total[4], total[5]);
  // printf("%c%c\n", total[6], total[7]);
  //
  // // method 2
  // int year;
  // int month;
  // int date;
  // scanf("%4d%2d%2d", &year, &month, &day);
  //
  // printf("%d\n%02d\n%02d\n", year, month, date);


  // // #3 学生基本信息输入输出
  // long number;
  // float score_c;
  // float score_math;
  // float score_english;
  // scanf("%ld;%f,%f,%f", &number, &score_c, &score_math, &score_english); 
  //
  // printf("The each subject score of No. %ld is %.2f, %.2f, %.2f.\n", number, score_c, score_math, score_english); 


  // // #4 printf的返回值
  // int res = 0;
  // res = printf("Hello world!");
  // printf("\n%d\n", res);

  // #5 预测数值
  int i;
  int a = 2;
  for(i = 0; i < 5; i++){
    if(i == 4){
      printf("%d", sum(a));
      break;
    }
    printf("%d,", sum(a));
  }
  printf("\n");
  return 0;
}

int sum(int a)
{
  int c = 0;
  static int b = 3;
  c += 1;
  b += 2;
  return (a + b + c);
}

