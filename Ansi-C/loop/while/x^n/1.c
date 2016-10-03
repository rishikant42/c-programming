#include<stdio.h>
void main()
{
  int count,n;
  float x, y = 1.0;
  printf("Enter x & n\n");
  scanf("%f%d", &x, &n);
  count = 1;
  while(count <= n)
  {
    y = y*x;
    count++;
  }
  printf("the result of %f power %d is = %f\n", x, n,y);
}



