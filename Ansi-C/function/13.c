#include<stdio.h>
main()
{
  int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
  int *p,i,j,k=0;
  p=a;
  /*to evalute any elment of a[i][j] we use directy [n(i)+j] whr n is total no of column it means we use *(p + n(i)+j) */
  /*if we want to know a[2][1], then we evult 3(2)+1 i.e 7 use *(p+7) to know value of a[2][1]*/
  printf("%d\n",a[2][1]);

  for(i=0;i<4;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("a[%d][%d]=%d\n",i,j,*(p+k));
      k++;
    } 
  }
}
