#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=5;j>i;j--)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i=6;i<=9;i++)
  {
    for(j=6;j<=i;j++)
    {
      printf(" ");
    }
    for(j=9;j>=i;j--)
    {
      printf("*");
    }
    printf("\n");
  }
}
