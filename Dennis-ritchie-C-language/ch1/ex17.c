#include <stdio.h>

#define MAXLINE 1000
#define MAXLENGTH 10

int get_line(char line[], int maxline);

int main()
{
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0)
    if (len > MAXLENGTH)
      printf("%s\n", line);

  return 0;
}

int get_line(char s[], int lim)
{
  int c, i, l;

  for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i < lim - 1)
      s[l++] = c;
  }
  if (c == '\n')
    if (l < lim - 1)
      s[l++] = c;
  s[l] = '\0';

  return l;
}
