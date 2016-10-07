#include<stdio.h>
void main()
{
  float a,b;
  printf("Enter a & b\n");
  scanf("%f%f" ,&b,&a);
  if(a > b)
  {
    printf("a is max wr a=%f", a);
  }
  else
  {
    printf("b is max wr b=%f", b);
  }
}
