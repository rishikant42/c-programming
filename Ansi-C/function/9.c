#include<stdio.h>
void main()
{
  int *p,i,sum;
  int x[5]={1,2,3,4,5};
  p=x;
  printf("element\t value\t address\t\n");
  for(i=0;i<5;i++)
  {
    //printf("element\t value\t address\t");
    printf("x[%d]\t %d\t %u\n",i,*p,p);
    sum+=*p;
    p++;
  }
  printf("sum=%d\n",sum);
  printf("x[2]=%d\n",p+2);
  printf("&x[2]=%u\n",&x[2]);
  printf("%d\n",*(p+2));
}
