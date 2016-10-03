#include<stdio.h>
void main()
{
int i,j;
int s[i][j];
printf("enter sales girls & item\n");
for(i=0;i<4;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&s[i][j]);
}
}
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

