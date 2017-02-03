#include<stdio.h>
#include<string.h>

typedef enum
{
  Sun, Mon, Tue, Wed, Thus, Fri, Sat
}WEEKDAY;

int main() {
  WEEKDAY wd1;
  WEEKDAY wd2;
  wd1 = Sun;
  wd2 = Mon;
  printf("%d\n", wd1);
  printf("%d\n", wd2);
  return 0;
}
