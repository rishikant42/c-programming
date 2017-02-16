#include<stdio.h>

typedef struct {
  int wt;
  int age;
}person;

person fn(int a, int w) {
  person p;
  p.age = a;
  p.wt = w;
  return p;
}

int main() {
  person pp;
  pp = fn(5, 25);
  printf("Age = %d\nWeight = %d\n", pp.age, pp.wt);
  return 0;
}
