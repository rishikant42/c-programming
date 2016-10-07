#include<stdio.h>
struct info
{
  char name[20];
  int age;
  char mid[20];
  float salary;
};
main()
{
  struct info my;
  printf("Enter info\n");
  scanf("%s%d%s%f",my.name,&my.age,my.mid,&my.salary);
  printf("%s %d %s %f\n",my.name, my.age, my.mid, my.salary);
}
