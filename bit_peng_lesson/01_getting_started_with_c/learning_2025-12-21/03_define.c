#include <stdio.h>

#define NUM 100
#define ADD(x, y) ((x) + (y))
int main(void)
{

  printf("NUM equal %d\n", NUM);
  int a = 10;
  int b = 20;

  int z = ADD(a, b);
  printf("a add b equal %d\n", z);
  return 0;
}
