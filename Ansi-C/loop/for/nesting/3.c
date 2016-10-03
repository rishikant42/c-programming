#include<stdio.h>
void main()
{
  int i,j,m;
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      m=i*j;
      printf("%d*%d=%d",i,j,m);
      printf("\t");
    }
    printf("\n");
  }
}


