#include<stdio.h>
main()				/*calling fn*/
{
  int c,a,b;
  printf("Enter any 2 no\n");
  scanf("%d%d",&a,&b);
  c=sum(a,b);
  printf("sum=%d\n",c);
}
int sum(int x,int y)		/*called fn*/
{
  int z;
  z=x+y;
  //return(z);
}






/*is it necessary to declare to declare x & y?*/
/*which is return stmnt & wt its role*/
/*here c is calling argument*/
