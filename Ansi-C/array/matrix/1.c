#include<stdio.h>
void main()
{
  int i,j,k,c[3][3]={};
  int a[3][3]={1,2,3,4,5,6,7,8,9};
  int b[3][3]={1,2,3,4,5,6,7,8,9};
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      //c[i][j]=0;
      for(k=0;k<3;k++)
      {
        //c[i][j]=0;

        c[i][j]+=a[i][k]*b[k][j];
      }
      printf("%d\t",c[i][j]);

    }
    printf("\n");
  }
}


/*u must check the output for c[i][j]=0 & understand their logic*/
