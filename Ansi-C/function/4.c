#include<stdio.h>
void main()
{
  int n,fact=1;				/*factorial without RECURSION*/
  printf("Enter req no of factorial\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    fact=i*fact;
  }
  printf("%d!=%d\n",n,fact);
}
/*compile method is differ if we use int inside the condition of loop*/
/*for compile use    cc -std=c99 rk4.c */
