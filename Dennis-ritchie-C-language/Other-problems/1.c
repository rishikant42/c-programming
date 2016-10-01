#include<stdio.h>
main()
{
  long c, n = 0;
  c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
    n++;
  }
  printf("%s\n",n);
}
