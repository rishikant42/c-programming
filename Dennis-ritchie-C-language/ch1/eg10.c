#include<stdio.h>

int main() {
  int c, nc;

  nc = 0;

  while (getchar() != EOF)
    ++nc;

  printf("%d\n", nc);

}
