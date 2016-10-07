#include<stdio.h>
struct student
{
  int wt;
  float ht;
}student0 = {15,16};

main()
{

  struct student student1 = {50,65.55};
  struct student student2 = {55,65};
  struct student student3 = {10,45.3};
  struct student student4;
  struct student student5;
  student4 = student1;
  student5 = student4;

  printf("%d %f\n",student0.wt,student0.ht);
  printf("%d %f\n",student1.wt,student1.ht);
  printf("%d %f\n",student2.wt,student2.ht);
  printf("%d %f\n",student3.wt,student3.ht);
  printf("%d %f\n",student4.wt,student4.ht);
  printf("%d %f\n",student5.wt,student5.ht);

}
