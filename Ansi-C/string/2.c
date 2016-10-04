#include<stdio.h>
void main()
{
  char line[10];
  printf("Enter text\n");
  scanf("%[^\n]", line);
  printf("%s\n",line);
}
