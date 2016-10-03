#include<stdio.h>
void main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c = sum(a,b);
  printf("sum = %d",c);
}
int sum(int x, int y)
{
  int z;
  z = x+y;
  return(z);
}
