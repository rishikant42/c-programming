#include<stdio.h>
struct rishi
{
  char name[20];
  int day;
  char month[10];
  int year;
  float salary;
};
main()
{
  struct rishi person;
  printf("Input values\n");
  scanf("%s%d%s%d%f",person.name,&person.day,person.month,&person.year,&person.salary);
  printf("%s %d %s %d %f\n",person.name,person.day,person.month,person.year,person.salary);
}
