#include <stdio.h>
#define PI 3.1415926
int main(void)
{
  // // #1 打印输出语句
  // printf("printf(\"Hello wolrd!\\n\");\n");
  // printf("cout << \"Hello world!\" << endl;\n");

  // #2 输出最大值
  // int num1, num2, num3, num4;
  // int max = -1;
  // scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
  //
  // max = (num1 > max ? num1 : max); 
  // max = (num2 > max ? num2 : max);
  // max = (num3 > max ? num3 : max);
  // max = (num4 > max ? num4 : max);
  // printf("%d\n", max);


  // // #3 计算球体体积
  // float r = 0.0f;
  // float area = 0.0f;
  //
  // scanf("%f", &r);
  // area = 4.0 / 3 * PI * (r * r * r); 
  // printf("%.3f\n", area);


  // #4 计算体重指数
  int weight = 0;
  int height = 0;
  float num_bmi = 0.0f;
  float meter_height = 0.0f;
  scanf("%d%d", &weight, &height);
  
  meter_height = height / 100.0;
  num_bmi = weight / (meter_height * meter_height);
  printf("%.2f\n", num_bmi);

  return 0;
}
