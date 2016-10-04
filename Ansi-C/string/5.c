#include<stdio.h>
void main()
{
  char string[]="cprogramming";
  int c,d;
  for(c=0;c<12;c++)
  {
    d=c+1;
    printf("%*.*s\n",-12,d,string);
  }
}
