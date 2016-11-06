#include<stdio.h>

void swap(int *px, int *py);

int main() {
  int x=1, y=2;

  printf("Before swap: \n");
  printf("x = %d & y = %d\n", x, y);

  swap(&x, &y);

  printf("After swap: \n");
  printf("x = %d & y = %d\n", x, y);

  return 0;
}

void swap(int *px, int *py) {
  int tmp;

  tmp = *px;
  *px = *py;
  *py = tmp;
}
