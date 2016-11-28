#include <stdio.h>

main()
{
  int c, blank_recieved;
  blank_recieved = 0;
  printf("Input some characters\n");
  while ((c = getchar()) != EOF)
    if (c == ' ') {
      if (!blank_recieved) {
        blank_recieved = 1;
        putchar(c);
      }
    } else {
      blank_recieved = 0;
      putchar(c);
    }
}
