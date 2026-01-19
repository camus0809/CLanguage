#include <stdio.h>
int main(void)
{
  // int day;
  // printf("Pls input 1-7: ");
  // scanf("%d", &day);
  // switch (day){
  //   case 1: printf("Monday.\n");break;
  //   case 2: printf("Tuesday.\n");break;
  //   case 3: printf("Wednesday.\n");break;
  //   case 4: printf("Thursday.\n");break;
  //   case 5: printf("Friday.\n");break;
  //   case 6: printf("Saturday.\n");break;
  //   case 7: printf("Sunday.\n");break;
  //   default: printf("err\n");break;``
  // }

  // switch(day){
  //   case 1: case 2: case 3: case 4: case 5:
  //     printf("weekday.\n");break;
  //   case 6: case 7:
  //     printf("weekend.\n"); break;
  //   default: printf("err.\n");break;
  // }


  int m = 2;
  int n = 1;
  switch(n){
    case 1: m++;
    case 2: n++;
    case 3:
    switch(n){
        case 1: n++;
        case 2: m++; n++;break;
      }
    case 4: m++;break;
    default: break;
  }
  printf("m = %d, n = %d\n", m, n);
  return 0;
}
