#include <stdio.h>

struct Student {
  //  成员
  char name[20];
  int age;
  char sex[10];
  char tele[12];
};
void print(struct Student * ps);

int main(void)
{
  struct Student stu = {"hkul", 22, "female", "19990303079"};
  // 结构体对象.成员名
  // printf("%s\n", stu.name);
  

  print(&stu);
  return 0;
}
void print(struct Student * ps)
{
  // printf("name is %s.\n", (*ps).name);
  // printf("age is %d.\n", (*ps).age);
  // printf("sex is %s.\n", (*ps).sex);
  // printf("telephone is %s.\n", (*ps).tele);


  // 结构体对象->成员名
  printf("name is %s.\n", ps->name);
  printf("age is %d.\n", ps->age);
  printf("sex is %s.\n", ps->sex);
  printf("telephone is %s.\n", ps->tele);
}
