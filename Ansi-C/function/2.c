#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter a & b resptvly\n");
  scanf("%d%d",&a,&b);
  swap(a,b);
  printf("a=%d\nb=%d\n",a,b);
}
swap(int x, int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  return(t);
}


/*check rk8.c to swap the value*/
