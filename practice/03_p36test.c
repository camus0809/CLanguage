#include <stdio.h>

int main(void)
{
  // // #1 计算n的阶乘
  // int i = 1;
  // int res = 1;
  // int n = 1;
  // scanf("%d", &n);
  // for(i = 1; i <= n; i++){
  //   res *= i;
  // }
  //
  // printf("%d\n", res);
  

  // // #2 计算1! + 2! + ... + 10!
  // int i = 1;
  // int j = 1;
  // int res = 0;
  // int factorial = 1;
  // // // method 1
  // // for(i = 1; i <= 10; i ++){
  // //   factorial = 1;
  // //   for(j = 1; j <= i; j ++){
  // //     factorial *=j;
  // //   }
  // //   res += factorial;
  // // }
  //
  // // method 2
  // for(i = 1; i <= 10; i++){
  //   factorial = factorial *i;
  //   res += factorial;
  // }
  // printf("%d\n", res);


  // #3 在一个有序数组中查找具体的某个数字（二分查找）
  int arr[] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
  int high = sizeof(arr) / sizeof(arr[0]) - 1;
  int low = 0;
  int index = (high + low) / 2;
  int search_num = 0;
  
  scanf("%d", &search_num);
  while(high >= low){
    if(arr[index] > search_num){
      high = index - 1;
    }else if(arr[index] < search_num){
      low = index + 1;
    }else{
      break;
    }
    index = (low + high) / 2;
  }
  if(low <= high){
    printf("search sucess.The index is %d.\n", index);
  }else{
    printf("search error.\n");
  }
  return 0;
}
