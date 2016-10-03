#include<stdio.h>
void main()
{
  int i,n;
  float x,y=1.0;
  printf("Enter value of x & n\n");
  scanf("%f%d",&x, &n);
  for(i=1;i<=n;i++)
  {
    y*=x;
  }
  printf("the %f to the power %d is %f\n",x,n,y);
}


