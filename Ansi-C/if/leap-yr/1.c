#include<stdio.h>
void main()
{
  int yr;
  printf("Enter yr\n");
  scanf("%d",&yr);
  if((yr%4==0 && yr%100!=0) || yr%400==0)
  {
    printf("%d is leap year\n", yr);
  }
  else
  {
    printf("%d is not leap yr\n", yr);
  }
}
