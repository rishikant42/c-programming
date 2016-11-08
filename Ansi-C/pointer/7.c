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

  printf("\nLearn more\n\n");


  int *pc;
  pc = &a[3];
  printf("a[3] = %d\n", *pc);


  printf("*************************\n");
  int *pd;
  pd = &a[0];
  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, pd[i]);


  printf("*************************\n");
  int *pe;
  pe = a;
  for(i=0;i<5;i++)
    printf("a[%d] = %d\n", i, pe[i]);

  return 0;
}
