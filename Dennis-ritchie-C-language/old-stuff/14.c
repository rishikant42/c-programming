#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
  int c, i, j, length, wordn, state; 
  int lengths[100];

  length = 0;
  wordn = 0;
  for(i=0; i<100; i++)
    lengths[i] = 0;
  state = OUT;
  while((c = getchar()) != EOF && wordn < 100)
  {
    if(c == ' ' || c == '\t' || c == '\n')
      state = OUT;

    else if(wordn == 0)
    {
      ++length;
      ++wordn;
      state = IN;
    }

    else if(state == IN)
      ++length;

    else if(state == OUT)
    {
      lengths[wordn] = length;
      length = 1;
      state = IN;
      ++wordn;
    }
  }

  lengths[wordn] = length;

  for(i=1; i <= wordn; i++)
  {
    printf("  %d : ",i);

    for(j=1; j<= lengths[i]; j++)
    {
      printf("-");
    }

    printf("\n");
  }

}


