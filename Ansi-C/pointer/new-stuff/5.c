#include<stdio.h>

typedef struct person
{
  int age;
  float weight;
}P;

int main()
{
  P *personPtr;
  P person1;

  personPtr = &person1;

  printf("Enter Integer: ");
  scanf("%d", &personPtr->age);

  printf("Enter number: ");
  scanf("%f", &personPtr->weight);

  printf("Displaying: ");
  printf("%d  %f\n", personPtr->age, personPtr->weight);

  return 0;
}
