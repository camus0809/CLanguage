#include <stdio.h>
#define ARRAY_NUM 10
int main(void)
{
  // 定义arr数组存放10个整型字面量
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  // 打印arr中下标为8的元素 
  // printf("arr[8] = %d\n", arr[8]);
  int i;
  for(i = 0; i < ARRAY_NUM; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
