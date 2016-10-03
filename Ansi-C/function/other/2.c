#include<stdio.h>
void main()
{
  int i;
  for(i=1;i<=3;i++)
    stat();
}
void stat(void)
{
  static int x=0;
  x++;
  printf("%d\n",x);
}


/*use word auto in place of static & understand theie output*/
