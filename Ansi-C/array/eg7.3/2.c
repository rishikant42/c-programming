#include<stdio.h>
void main()
{
int i,j;
int s[4][3] = {310,275,365,210,190,325,405,235,240,260,300,380};
/*sales girl total*/
for(i=0;i<4;i++)
{
int sum=0;
for(j=0;j<3;j++)
{
sum=sum+s[i][j];
}
printf("total for sales girl[%d] is %d\n",i+1,sum);

printf("\n");
}

/* item totals*/
for(j=0;j<3;j++)
{
int sum=0;
for(i=0;i<4;i++)
{
sum=sum+s[i][j];
}
printf("item[%d]total=%d\n",j+1,sum);
}
}
