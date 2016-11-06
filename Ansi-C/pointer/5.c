#include<stdio.h>

int main(){
  int *ip;
  int x=1, y=2;

  ip = &x;

  printf("x = %d\n", x);
  printf("y = %d\n", y);
  printf("address of x = %p\n", &x);
  printf("ip = %p\n", ip);
  printf("value pointed by ip = %d\n", *ip);

  y = *ip;

  printf("y = %d\n", y);

  *ip = 3;

  printf("x = %d\n", x);

  return 0;
}
