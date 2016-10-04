#include<stdio.h>
void main()
{
  char line[13]="cprogramming";
  int c,d;
  for(c=0;c<12;c++)
  {
    d=c+1;
    printf("%*.*s\n",-12,d,line);
  }
  for(c=0;c<12;c++)
  {
    d=12-c;
    printf("%*.*s\n",-12,d,line);
  }
}





