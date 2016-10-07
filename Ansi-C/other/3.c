#include<stdio.h>
void main()
{
  int i,n,m;
  printf("Entr the no of req table\n");
  scanf("%d", &n);
  for(i = 1;i <= 10;i++ )
  {
    m = n*i;
    printf("%d*%d=%d\n",n,i,m);
  }
}

