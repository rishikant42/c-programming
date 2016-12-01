#include <stdio.h>

int main()
{
  int c, start;

  start = 0;
  printf("Input some characters\n");
  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n') {
      if (!start) {
        putchar('\n');
        start = 1;
      }
    } else {
      putchar(c);
      start = 0;
    }

  return 0;
}
