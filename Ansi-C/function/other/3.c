#include<stdio.h>
void main()
{
  int a=20;
  int b=10;
  //int c;
  {
    int a=5;
    int c;
    c=a+b;
    printf("%d\n",c);
  }
  //printf("%d\n",c);

}
