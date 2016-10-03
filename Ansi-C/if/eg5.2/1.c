#include<stdio.h>
void main()
{
  int count, i;
  float wt, ht;
  count = 0;
  printf("Enter weight & height\n");
  for(i = 1; i <=10; i++)
  {
    scanf("%f%F", &wt, &ht);
    if(wt < 50 && ht > 170)
      count = count+1;
  }
  printf("the no person whose ht<50 & wt>170 is = %d", count);
}

