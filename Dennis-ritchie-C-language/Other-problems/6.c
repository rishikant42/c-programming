#include<stdio.h>
main()
{
  int i, c, nwhite, nother, ndigit[10];
  nwhite = 0;
  nother = 0;
  for(i=0; i<10; i++)
    ndigit[i] = 0;

  while((c = getchar()) != EOF)
  {

    if(c == ' ' || c == '\n' || c == '\t')
      ++nwhite;

    else if(c >= '0' && c < '10')
      ++ndigit[c - '0'];

    else
      ++nother;

  }
  printf("%d\n",nwhite);
  printf("%d\n",nother);

  printf("______________________________________\n");
  for(i=0; i<10; i++)
    printf("%d\n",ndigit[i]);

}
