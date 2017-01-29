#include<stdio.h>

int main() {
  FILE *fp;
  char str[60];

  fp = fopen("file.txt", "r");

  fgets(str, 60, fp);

  puts(str);

  return 0;
}
