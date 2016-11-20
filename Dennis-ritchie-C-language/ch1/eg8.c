#include<stdio.h>

int main() {
  int c;

  c = getchar();

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }

  printf("\nGoodBye\n");

}


// ctrl + d  ==> EOF
// This program understand meaning of ctrl + d
