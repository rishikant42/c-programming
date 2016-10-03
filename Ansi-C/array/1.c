#include<stdio.h>
void main()
{
int a[5] = {3,1,4,5,2};
int i,j;
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i] > a[j])
{
int t;
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
printf("%d\n",a[i]);
}
}
