#include<stdio.h>
main()
{						/*address always change on every time compile*/
  int x,y;
  int *ptr;
  x=10;
  ptr=&x;
  y= *ptr;
  printf("value of x is %d\n",x);
  printf("%d has adrs %d\n",x,&x);
  printf("%d has adrs %d\n",ptr,&ptr);
  printf("%d has adrs %d\n",*ptr,&*ptr);
  printf("%d has adrs %d\n",y,&y);
  printf("%d has adrs %d\n",*&x,&x);
  *ptr=100;
  printf("now x is %d\n",x);
  //printf("value of x is %d\n",x);
  printf("%d has adrs %d\n",x,&x);
  printf("%d has adrs %d\n",ptr,&ptr);
  printf("%d has adrs %d\n",*ptr,&*ptr);
  printf("%d has adrs %d\n",y,&y);
  printf("%d has adrs %d\n",*&x,&x);

}
