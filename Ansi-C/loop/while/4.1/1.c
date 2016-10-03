#include<stdio.h>
void main()
{
  int sum=0,n,i=1;
  printf("Enter value of n up to which cube is req\n");
  scanf("%d",&n);
  while(i <= n)
  {
    sum = sum + i*i*i;
    i++;
  }
  printf("sum = %d\n",sum);
}
