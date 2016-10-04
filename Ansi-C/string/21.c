#include<stdio.h>
#include<string.h>
void main()
{
  char s1[20],s2[20];
  printf("Enter strings\n");
  scanf("%s%s",s1,s2);
  if(strstr(s1,s2)==NULL)
    printf("s2 is not sub string of s1\n");
  else
    printf("s2 is sub string of s1\n");
}
