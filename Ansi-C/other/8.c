#include<stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("file.txt", "w+");

  fputs("This is c programming\n", fp);
  fputs("It's also written\n", fp);

  fclose(fp);
  return 0;
}
