#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {
  int i;

  printf("The no. of args is %d\n\n", argc);
  printf("Given args are: \n\n");

  for(i=0;i<argc;i++)
    printf("The arg-%d is %s\n", (i+1), argv[i]);

  printf("\n");

   if(argc > 1) {
     printf("The arg-2 have following chars:\n\n");
     int len = strlen(argv[1]);
     for(i=0;i<len;i++)
       printf("The char-%d is %c\n", (i+1), argv[1][i]);
   }

  return 0;
}
