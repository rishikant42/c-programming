#include<stdio.h>
void main()
{
  int i,j;
  int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4},c[2][2];
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
}
