#include<stdio.h>
void main()
{
  int i,x;
  int a[5] = {1,2,3,4,5};
  printf("enter search no\n");
  scanf("%d",&x);

  for(i=0;i<=5;i++)
  {
    if(x==a[i])
    {
      printf("the %d no is at %d position\n",a[i],i+1);
      printf("\n");
    }
  }
}
/*check the output for x=a[i] which clear the doubt of equal i.e = and assingment i.e == operators*/
