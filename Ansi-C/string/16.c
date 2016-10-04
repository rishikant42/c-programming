#include<stdio.h>
void main()
{
  char string1[10]={"rishi"};
  char string2[10]={"rishi"};
  int i=0;
  while(string1[i]==string2[i] && string1[i]=='\0'&&string2[i]=='\0')
    i++;
  {
    if(string1[i]=='\0'&&string2[i]=='\0')
      printf("both string are equal\n");
    else
      printf("not equal\n");
    //i++;
  }
}
