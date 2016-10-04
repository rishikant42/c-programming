#include<stdio.h>
void main()
{
  char s1[20],s2[20],s3[20];
  int x;
  printf("Enter two strings\n");
  scanf("%s%s",s1,s2);
  x=strcmp(s1,s2);
  if(x==0)
  {
    printf("strings are equal\n");
    strcpy(s3,s1);
    printf("s1 = %s\ns2 = %s\ns3 = %s\n",s1,s2,s3);
  }
  else
  {
    printf("strings are not equal\n");
    strcat(s1,s2);
    strcat(s1,s3);
    printf("s1 = %s\ns2 = %s\ns3 = %s\n",s1,s2,s3);
  }
}
