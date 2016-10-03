#include<stdio.h>
main()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9};
  int *p,i;
  p=a;
  for(i=0;i<9;i++)
    printf("*(p+%d)\t=\t%d\n",i,*(p+i));
}
