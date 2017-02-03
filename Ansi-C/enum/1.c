#include<stdio.h>
#include<string.h>

enum weekday
{
  Sun, Mon, Tue, Wed, Thus, Fri, Sat
};

int main() {
  enum weekday wd1;
  enum weekday wd2;
  wd1 = Sun;
  wd2 = Mon;
  printf("%d\n", wd1);
  printf("%d\n", wd2);
  return 0;
}
