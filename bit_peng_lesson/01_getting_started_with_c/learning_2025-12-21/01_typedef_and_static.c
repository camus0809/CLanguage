#include <stdio.h>
typedef unsigned int uint;
typedef struct Node {
  int data;
  struct Node* next;
}Node;

void test();
/*
int main(void)
{
  //  #1. typedef
  uint num1 = 2;
  unsigned int num2 = 0;

  struct Node n;
  Node n2;
  return 0;
}
*/


// #1. static 
//  1. 修饰局部变量
/*
int main(void)
{
  int i = 0;
  while(i < 10){
    test();
    i++;
  }
  printf("\n");
  
}
void test()
{
  // int a = 1;
  static int a = 1;
  printf("%d ", a ++);
}
*/

/*
//  2. 修饰全局变量
extern int g_val;
int main(void)
{
  printf("g_val = %d\n", g_val);
  return 0;
}
*/

//  3. 修饰函数

extern int Add(int, int);
int main(void)
{
  int a = 10;
  int b = 20;

  int z = Add(a, b);

  printf("a add b equal %d\n", z);
  return 0;
}
