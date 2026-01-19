#include <stdio.h>
int main(void)
{
  int array[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
  int i;

  for(i = 0; i < (sizeof(array)/sizeof(int)); i ++){
    printf("%c", array[i]);
  }
  printf("\n");
  return 0;
}
