#include <stdio.h>
#include <string.h>
int main(void)
{
  // 字符表示
  char ch = 'w';
  // 字符串 C语言中没有字符串类型
  char str1[] = "abcdef";
  char str2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  char str3[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
  printf("%s\n%s\n", str1, str2);
  int lenstr1 = strlen(str1); //  求字符串长度的一个函数，string length
  int lenstr2 = strlen(str2);
  int lenstr3 = strlen(str3);
  printf("length of str1 = %d\n", lenstr1);
  printf("length of str2 = %d\n", lenstr2);
  printf("length of str3 = %d\n", lenstr3);
  return 0;
}
