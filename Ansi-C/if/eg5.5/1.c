#include<stdio.h>
void main()
{
  int units,customer;
  float charges;
  printf("Enter custer no & units\n");
  scanf("%d%d", &customer, &units);
  if(units <= 200)
    charges = 0.50*units;
  else if(units <= 400)
    charges = 100 + 0.65*(units-200);
  else if(units <= 600)
    charges = 230 + 2.80*(units-400);
  else
    charges = 390 + 1.00*(units-600);
  printf("\nCUSTOMER NO#%d & CHARGES = %f\n", customer, charges);
}

