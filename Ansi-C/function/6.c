#include<stdio.h>
void main()
{
  int total,n,p[n];
  printf("How many no u will enter?\n");
  scanf("%d",&n);
  printf("Enter them\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }
  int z;
  printf("Enter no up to which square is req\n");
  scanf("%d",&z);
  total = int sum(p[n],z);
  printf("total=%d",total);
}

int sum(int a[],int k)
{
  int add=0;
  for(int i=0;i<k;i++)
  {
    add+=a[k]*a[k];
  }
  return(add);
} 

