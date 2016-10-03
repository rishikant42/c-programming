#include<stdio.h>
void main()
{
int i,j,k,t;
int a[5] = {3, 5, 1, 2, 4};


for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i] > a[j])
{

t = a[i];
a[i] = a[j];
a[j] = t;

}
for(k=0;k<5;k++)
printf("%d ",a[k]);



printf("\n");
}
}

}
