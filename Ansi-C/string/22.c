#include<stdio.h>
void main()
{
  char string[5][20],rk[20];
  int i,j;
  printf("Enter names of things \n");
  //while(i<5)
  //scanf("%s",string[i++]);
  for(i=0;i<5;i++)
    scanf("%s",string[i]);
  for(i=0;i<4;i++)
  {
    for(j=0;j<=4-i;j++)
    {
      if(strcmp(string[j-1],string[j])>0)
      {
        strcpy(rk,string[j-1]);
        strcpy(string[j-1],string[j]);
        strcpy(string[j],rk);
      }
    }
  }
  printf("alphabetical oder of given things\n");
  for(i=0;i<5;i++)
    printf("%s\n",string[i]);
}


/*sorting of names i.e arranging in alphantical oder*/
