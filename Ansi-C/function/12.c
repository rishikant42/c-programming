#include<stdio.h>
main()
{
  int a[3][4]={0,1,2,3,4,5,6,7,8,9,10,11};
  int *p,i,j;
  int k=0;
  p=a;
  printf("Element\t value\t adrs1\t adrs2\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {

      printf("a[%d][%d]\t %d\t %d\t %u\n",i,j,*(p+k),(p+k),&a[i][j]);
      k++;
    }
  }
}
