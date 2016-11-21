#include<stdio.h>

int main() {
  int c;

  c = getchar() != EOF;

  printf("c = %d\n", c);

}

// OUTPUT

// $ ./a.out 
// d
// c = 1
// 
// $ ./a.out 
// p
// c = 1
// 
// $ ./a.out 
// ctrl + d
// c = 0
