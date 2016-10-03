#include<stdio.h>
void main()
{
  int i,j,a[i][j];
  printf("enter digit of rows& columns\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j]);
      printf("a[%d][%d]=%d\t",i,j,a[i][j]);
    }
    printf("\n");
  }
}
