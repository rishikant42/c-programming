#include<stdio.h>
main()
{
  int n = 0;
  while(getchar() != EOF)
    n++;
  printf("%d\n",n);
}

//enter & space is also counted
