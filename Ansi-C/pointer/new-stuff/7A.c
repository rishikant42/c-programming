#include<stdio.h>
#include<string.h>

int main(int argc, char** argv) {
  char* sptr = "Hello world";

  int len = strlen(sptr);

  printf("'%s' string have following characters: \n\n", sptr);
  int i;
  for(i=0;i<len;i++)
    printf("The char-%d is %c\n", i+1, sptr[i]);

  return 0;
}
