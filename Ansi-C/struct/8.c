#include<stdio.h>
void main()
{
  struct marks
  {
    int sub[3];
    int total;
  };

  struct marks student[3] = {45,67,81,0,75,53,69,0,57,36,71,0};
  struct marks total;

  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      student[i].total+= student[i].sub[j];
      total.sub[j]+= student[i].sub[j];

    }
    printf("student[%d] = %d \n",i+1,student[i].total);
  }


  for(i=0;i<3;i++)
    printf("subject[%d] = %d\n",i+1,total.sub[i]);
  /*
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
     {
     total.sub[i]+= student[j].sub[i];
     }
     printf("subject[%d] = %d \n",i+1,total.sub[i]);
     }*/


  for(i=0;i<3;i++)
    total.total+= student[i].total;

  printf("Grand total = %d\n",total.total);

}
