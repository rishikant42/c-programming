#include<stdio.h>

typedef struct person
{
  int age;
  float weight;
};

int main()
{
  struct person *personPtr;
  struct person person1;

  personPtr = &person1;

  printf("Enter Integer: ");
  scanf("%d", &(*personPtr).age);

  printf("Enter number: ");
  scanf("%f", &(*personPtr).weight);

  printf("Displaying: ");
  printf("%d  %f\n", (*personPtr).age, (*personPtr).weight);

  return 0;
}
