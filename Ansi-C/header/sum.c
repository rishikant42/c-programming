#include<stdio.h>
#include"sum.h"

int main() {
  int a = 10;
  int b = 20;

  printf("The sum of %d & %d is %d\n", a, b, add(a, b));
  return 0;
}
