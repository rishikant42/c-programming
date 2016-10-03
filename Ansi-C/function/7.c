#include<stdio.h>
void main()
{
  int a,b,c,result;
  printf("Enter any 3 no\n");
  scanf("%d%d%d",&a,&b,&c);
  result=mul(a,b,c);
  printf("multiply=%d\n",result);
  result=sum(a,b,c);
  printf("sum=%d\n",result);
}
int mul(p,q,r)
{
  int s;
  s=p*q*r;
  return(s);
}

int sum(p,q,r)
{
  int s;
  s=p+q+r;
  return(s);
} 

/*here no need to use return stmnt*/
/*no need to declare p,q,r*/
