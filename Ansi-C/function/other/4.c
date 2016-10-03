#include<stdio.h>
void printline(void);
main()
{
  int i;
  for(i=1;i<10;i++)
    printline();
  //printf("Myself rishi\n");
  //printline();
}
void printline(void)
{
  int i;
  for(i=1;i<=40;i++)
    printf("_");
  printf("\n");
}
