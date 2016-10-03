#include<stdio.h>
main()
{
  int m=1000;
  function2();
  printf("%d\n",m);
}
void function1(void)
{
  int m=10;
  printf("%d\n",m);
  //return(m);
}
void function2(void)
{
  int m=100;
  function1();
  printf("%d\n",m);
  //return(m);
}

/* no need to declare function1 & 2, it means if remove word void, output is taken*/
