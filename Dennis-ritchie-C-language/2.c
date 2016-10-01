#include<stdio.h>
main()
{
  float cel;
  int fahr;

  for(fahr = 0; fahr <= 300; fahr += 20)
  { 
    cel = ((5.0 / 9.0)*(fahr - 32));
    printf("%d f = %f c\n",fahr, cel);
  }
}



