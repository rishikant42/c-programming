#include<stdio.h>
void main()
{
  int y,n,sum = 0,i=1;
  printf("enter no up to which sum of square is require\n");
  scanf("%d",&n);
  for(y=1;y<=n;y++)
  {
    sum=sum+i*i;
    i++;
    printf("sum = %d\n",sum);
  }
}
