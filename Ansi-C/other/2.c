#include<stdio.h>
void main()
{
  int i,m,n;
  printf("Enter the no of req table\n");
  scanf("%d", &n);
  i = 1;
  do
  {
    m = n*i;
    printf("%d\t*\t%d\t=%d\n",n,i,m);
    i++;
  }
  while(i <= 10);
}

