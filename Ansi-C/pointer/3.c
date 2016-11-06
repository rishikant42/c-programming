#include<stdio.h>
main()
{
  char a;
  int x;
  float p,q;
  a='A';
  x=125;
  p=10.25,q=18;
  printf("%c is stored at address %u\n",a,&a);
  printf("%d is stored at address %u\n",x,&x);
  printf("%f & %f is stored at %u & %u respt\n",p,q,&p,&q);
}
