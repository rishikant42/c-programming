#include<stdio.h>
void main()
{
int i,j,a[2][3] = {1,2,3,4,5,6};
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]=%d\t",i,j,a[i][j]);
}
printf("\n");
}
}
