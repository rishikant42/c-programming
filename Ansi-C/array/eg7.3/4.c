#include<stdio.h>
void main()
{
int i,j,k;
int r1,r2,c1,c2;
printf("Enter oder\n");
scanf("%d%d%d%d",&r1, &r2, &c1, &c2);
int a[r1][c1], b[r2][c2], c[c1][r2];

for(i=0; i<r1; i++)
{
for(j=0; j<c1; j++)
{
scanf("%d",a[i][j]);
}
}

for(i=0; i<r2; i++)
{
for(j=0; j<c2; j++)
{
scanf("%d",a[i][j]);
}
}

for(i=0; i<r1; i++)
{
for(j=0; i<c1; j++)
{
c[i][j] = 0;
for(k=0; k<c1; k++)
{
c[i][j] += a[i][k]*b[k][j];
printf("%d\t",c[i][j]);
}
printf("\n"); 
}
}
}
