#include<stdio.h>

int main() {
  int a[5] = {0, 1, 2, 3, 4};
  int *pa;
  pa = &a[0];

  int i;
  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *(pa+i));

  printf("*************************\n");

  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *pa+i);

  printf("*************************\n");

  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *pa++);

  printf("\nAlternate startegy\n\n");

  int *pb;
  pb = a;                   //same thing as above, but the way of decleration is little differ

  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *(pb+i));

  printf("*************************\n");

  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *pb+i);

  printf("*************************\n");

  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, *pb++);

  return 0;
}
