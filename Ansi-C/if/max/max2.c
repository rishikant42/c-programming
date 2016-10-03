#include<stdio.h>
void main()
{
  float a,b,c;
  printf("Enter any three diffr no\n");
  scanf("%f%f%f", &a, &b, &c);
  if(a > b)
  {

    if(a > c)
    {
      printf("a is max whr a = %f\n", a);
    }
    else
    {
      printf("c is max whr c = %f\n", c);
    }

  }

  else
  {

    if(c > b)
    {
      printf("c is max whr c =%f\n", c);
    }
    else
    {
      printf("b is max whr b = %f\n", b);
    }

  }

}
