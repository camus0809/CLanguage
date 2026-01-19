#include <stdio.h>

int main(void)
{
  int a = 10; //  向内存申请4个字节存储a
  int *p = &a;
  printf("%p\n", p);


  printf("%zu\n", sizeof(char*));
  printf("%zu\n", sizeof(short*));
  printf("%zu\n", sizeof(int*));
  printf("%zu\n", sizeof(float*));
  printf("%zu\n", sizeof(double*));
  return 0;
}
