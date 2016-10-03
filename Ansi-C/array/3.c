#include<stdio.h>
void main()
{
  int i,j,x;
  int a[5]={4,3,5,1,2};
  for(i=0;i<=4;i++)
  {
    for(j=i+1;j<=4;j++)
    {
      if(a[i]>a[j])
      {
        x=a[i];
        a[i]=a[j];
        a[j]=x;

      }

    }
    printf("%d\n",a[i]);

  }

}
/*sorting of numbers*/
/*arrange in increase odr*/
