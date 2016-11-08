#include<stdio.h>
int main()
{
  float cel;
  int fahr, lower, upper, size;

  lower = 0;
  upper = 300;
  size = 20;

  for(fahr = lower; fahr <= upper; fahr += size)
  { 
    cel = ((5.0 / 9.0)*(fahr - 32));
    printf("%d f = %f c\n",fahr, cel);
  }
  return 0;
}
