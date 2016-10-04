#include<stdio.h>
#include<string.h>
void main()
{
  char s1[20],s2[20],s3[20];
  int n,x;
  printf("Enter two strings\n");
  scanf("%s%s",s1,s2);
  printf("Enter no that will copy & concatenates\n");
  scanf("%d",&n);
  strncpy(s1,s2,n);
  strncat(s1,s2,n);
  strcpy(s3,s1);
  x=strncmp(s1,s2,n);
  printf("s1=%s\ns2=%s\ns3=%s\n",s1,s2,s3);
  printf("x=%d\n",x);
}
