#include<stdio.h>
struct clas
{
  int roll;
  char name[20];
  int marks;
}
main()
{
  int x;
  struct clas stdnt1={111,"Rohit",50};
  struct clas stdnt2={125,"Mohit",60};
  struct clas stdnt3;
  stdnt3=stdnt2;
  x=((stdnt3.roll==stdnt2.roll)&&(stdnt3.marks==stdnt2.marks))?1:0;
  if(x==1)
  {
    printf("student 3 & student 2 are same\n");
    printf("%d %s %d\n",stdnt3.roll,stdnt3.name,stdnt3.marks);
  }
  else
    printf("both are differ\n");
}


/*to check wether = operator work in struct*/
