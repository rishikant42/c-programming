#include<stdio.h>
main()
{
  int i, c, nwhite, nother;
  int ndigit[10];

  for(i=0; i<10; i++)
  {
    ndigit[i] = 0;
  }

  while((c = getchar()) != EOF)
  {
    if(c >= '0' && c < '10')
      ++ndigit[c - '0'];

    else if(c == ' ' || c == '\t' || c == '\n')
      ++nwhite;

    else
      ++nother;
  }

  printf("no of digits...\n");

  for(i=0; i<10; i++)
    printf("ndigit[%d] = %d \n",i ,ndigit[i]);



  printf("wt_space = %d\n otr_char = %d\n",nwhite, nother);

}
