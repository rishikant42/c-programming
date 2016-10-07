#include<stdio.h>
struct marks
{
  int sub1;
  int sub2;
  int sub3;
  int total;
};

main()
{
  int i,j,k;
  struct marks student[3] = {{45,67,81,0},{75,53,69,0},{57,36,71,0}};
  struct marks total;

  for(i=0;i<3;i++)
  {
    student[i].total = student[i].sub1+student[i].sub2+student[i].sub3;

    total.sub1 = student[0].sub1+student[1].sub1+student[2].sub1;
    total.sub2 = student[0].sub2+student[1].sub2+student[2].sub2;
    total.sub3 = student[0].sub3+student[1].sub3+student[2].sub3;
    total.total += student[i].total;

  }

  printf("student		total\n");
  for(i=0;i<3;i++)
    printf("student[%d]	%d\n",i+1,student[i].total);

  printf("subject		total\n");
  printf("%s	%d\n%s	%d\n%s	%d\n","subject1",total.sub1,"subject2",total.sub2,"subject3",total.sub3);
  printf("grand total = %d\n",total.total);
}
