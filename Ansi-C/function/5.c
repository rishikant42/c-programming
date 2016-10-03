#include<stdio.h>
void main()
{
  int fact,n;
  printf("Enter req no of factorial\n");
  scanf("%d",&n);
  fact=factorial(n);
  printf("!%d=%d\n",n,fact);
}

int factorial(int m)
{
  if(m==1)
    return(1);
  else
    return(m*factorial(m-1));
}

