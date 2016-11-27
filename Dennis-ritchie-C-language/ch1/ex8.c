#include<stdio.h>

main()
{
  int c;
  int nb = 0;
  int nt = 0;
  int nn = 0;

  while((c = getchar()) != EOF)
  {
    if(c == ' ')
      ++nb;
    else if(c == '\t')
      ++nt;
    else if(c == '\n')
      ++nn;
  }

  printf("Blanks = %d\n", nb);
  printf("Tabs = %d\n", nt);
  printf("Newlines = %d\n", nn);

}
