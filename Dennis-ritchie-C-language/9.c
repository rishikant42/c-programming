#include<stdio.h>
main()
{
  int c, n=0, m=0, k=0;

  while((c = getchar()) != EOF)
  {
    if(c == '	')                  /* we also \t here */
      n++;
    else if(c == ' ')
      m++;
    else if(c == '\n')
      k++;
  }
  printf("tab = %d\n",n);
  printf("blank = %d\n",m);
  printf("new_line = %d\n",k);
}
