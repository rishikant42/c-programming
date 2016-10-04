#include<stdio.h>
void main()
{
  char line[80],character;
  int c=0;
  printf("Enter text\n");
  do
  {
    character = getchar();
    line[c]=character;
    c++;
  }
  while(character!='\n');
  c=c-1;
  line[c]='\0';
  printf("%s\n",line);
}

