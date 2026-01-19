#include <stdio.h>
#include <string.h>
int main(void)
{
  // #1. /? 三字母词
  // 以前的编译器会将 ??( --> [ ??) --> ]
  // printf("%s\n", "(are you ok??)");
  
  // #2. \' 打印单引号
  // 补充知识@1
  // %d  --> 打印整型  
  // %c  --> 打印字符 
  // %s  --> 打印字符串
  // %f  --> 打印float类型数据
  // %lf --> 打印double类型数据
  printf("%c\n", '\'');

  // #3. \" 打印双引号
  printf("%s\n", "this is \"Yangzi\" river");

  // #4. 打印`\`
  printf("%s\n", "abc\\0def");

  // #5. \a
  printf("\a");

  // #6. \b
  printf("abcd\b\b\befg\n");


  // #7. \bbb 
  printf("%c\n", '\130');

  printf("%zu\n", strlen("c:\test\628\test.c"));
  return 0;
}
