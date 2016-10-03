
#include<stdio.h>
void main()
{
  int i,j,m,n;
  int a[m][n],b[m][n],c[m][n];
  printf("Enter oder of matrx i.e value of m & n\n");
  scanf("%d%d",&m,&n);

  printf("Enter first matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[m][n]);
    }
  }

  printf("Enter second matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&b[m][n]);
    }
  }

  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      c[i][j]=a[i][j]+b[i][j];

      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
}
