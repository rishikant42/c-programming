#include<stdio.h>
main()
{
  float cel;
  int fahr, lower, upper, size;

  lower = 0;
  upper = 300;
  size = 20;

  for(fahr = upper; fahr >= lower; fahr -= size)
  { 
    cel = ((5.0 / 9.0)*(fahr - 32));
    printf("%d f = %f c\n",fahr, cel);
  }
}



