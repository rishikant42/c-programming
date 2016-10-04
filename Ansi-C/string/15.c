#include<stdio.h>
void main()
{
  int i,j,k;
  char first[10]={"vishw"};
  char second[10]={"pratap"};
  char last[10]={"singh"};
  char name[30];
  for(i=0;first[i]!='\0';i++)
    name[i]=first[i];
  name[i]=' ';
  for(j=0;second[j]!='\0';j++)
    name[i+j+1]=second[j];
  name[i+j+1]=' ';
  for(k=0;last[k]!='\0';k++)
    name[i+j+k+2]=last[k];
  name[i+j+k+2]='\0';
  printf("\n\n");
  printf("%s\n",name);
}
