#include<stdio.h>
main()
{
  struct st_record
  {
    int wt;
    float ht;
  };
  struct st_record student1={60,180.75};
  struct st_record student2={50,170.75};
  printf("%d\n%f\n%d\n%f\n",student1.wt,student1.ht,student2.wt,student2.ht);
}
