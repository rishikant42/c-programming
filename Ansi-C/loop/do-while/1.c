#include<stdio.h>
void main()
{
  int i = 1,m,n;
  printf("Enter the number of require table\n");
  scanf("%d",&n);
  do
  {
    m = n*i;
    printf("%d\t*\t%d\t=%d\n",n,i,m);
    i=i+1;
  }
  while(i <= 10);
}

