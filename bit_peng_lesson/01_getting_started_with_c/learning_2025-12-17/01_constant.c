#include <stdio.h>

/**
// #1. 字面常量
30;
3.14;
'w'; // 字符字面量
"hello"; // 字符串字面量
*/

// int main(void)
// {
  /**
  // #2. const修饰的常变量
  const int a = 10;
  a = 23;
  */

  // printf("%d\n", a);
  // return 0;
// }

  // #3. define定义的标识符常量
// #define MAX 100;
// int main(void)
// {
//     int a;
//     a = MAX
//     printf("a=%d\n", a);
//     return 0;
// }
//

// #4. 枚举常量
enum Color
{  
  RED,
  GREEN,
  BLUE
};
enum Sex
{
  MALE,
  FEMALE,
  SECRET
};
int main(void)
{
  // 三原色
  // Red Green Blue
  enum Color rgb;
  rgb = RED;
  
  return 0;
}
