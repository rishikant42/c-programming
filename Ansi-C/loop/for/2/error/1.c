#include<stdio.h>
void main()
{
  int y,n,sum = 0,i=1;
  printf("enter no up to which sum of square is require\n");
  scanf("%d",&n);
  for(y=0;y<=n;y++)
  {
    sum=sum+i*i;
    i++;
    printf("sum = %d\n",sum);
  }
}
/* if we use y=0 then result obtain is increase by one no
   it means sum of square up to 5 no is 55 but result obtain is 91 i.e 55+6*6*/
