#include<stdio.h>
void main()
{
  int sum = 0, i = 1, n;
  printf("Enter value of n\n");
  scanf("%d", &n);
  while(i <= n)
  {
    sum = sum + i*i;
    i++;
  }
  printf("sum = %d\n", sum);
}
