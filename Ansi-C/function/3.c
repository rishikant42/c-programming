#include<stdio.h>
float ratio (int x, int y, int z);
void main()
{
  int a,b,c;
  float result;
  printf("Enter any three no\n");
  scanf("%d%d%d",&a,&b,&c);
  result= ratio(a,b,c);
  printf("%f\n",result);
}
float ratio(int x,int y,int z)
{
  float t = 0.0;

  if(difference(y,z))
    t = (float)x/(y-z);
  return t;
}
int difference(int p,int q)
{
  if(p!=q)
    return(1);
  else
    return(0);
}



/*how to remove an error of division?*/
