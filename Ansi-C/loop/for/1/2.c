#include<stdio.h>
int main()
{
  int sum=0,n;
  for(n=1; n <= 5; n++)
  {
    sum = sum + n*n;
  }
  printf("sum =%d\n",sum);
  return(sum);
}


