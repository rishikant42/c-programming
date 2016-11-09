#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  printf("No of arg = %d\n", argc);

  printf("File Name = %s\n", argv[0]);

  for(i=1;i<argc;i++)
    printf("Arg[%d] = %s\n", i, argv[i]);

  return 0;
}
