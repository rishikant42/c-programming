#include<stdio.h>
void main()
{
int r1,c1,r2,c2;
int i,j,k;
printf("Enter order of both matrix i.e value of r1 c1 r2 c2 respectively\n");
scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
int a[r1][c1],b[r2][c2],c[r1][c2];
printf("Enter first matrix\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter second matrix\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<r2;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
printf("%d\t",c[i][j]);
}
printf("\n");
}
}

 
