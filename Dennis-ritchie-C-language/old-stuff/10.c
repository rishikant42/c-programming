#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
  int nw, nl, nc, state, c;
  state = OUT;
  nw = nl = nc = 0;
  while((c = getchar()) != 0)
  {
    ++nc;
    if(c == '\n')
      ++nl;
    if(c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT)
    {
      state = IN;
      ++nw;
    }
  }
  printf("line = %d\nword = %d\ncharcter = %d\n", nl, nw, nc);
}

