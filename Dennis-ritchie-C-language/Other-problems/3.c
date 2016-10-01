#include<stdio.h>
#define RESET 0
#define ON 1

main()
{
  int i,wnum=0,c,wc[50];
  int count=0,state;
  state=RESET;
  for(i=0;i<50;++i)
    wc[i]=0;
  /*Populating the array with character counts of the typed words*/
  while((c=getchar())!=EOF)
  {
    if(c=='\n'||c=='\t'||c==' '||c=='"')
    {
      if(state!=RESET)
        state=RESET;
    }
    else if((c>=65&&c<=90)||(c>=97&&c<=122))
    {
      if(state==RESET)
      {
        count=RESET;
        ++wnum;
        state=ON;
      }
      ++count;
      wc[wnum-1]=count;
    }
  }
  c=RESET;

  /*Finding the character count of the longest word*/
  for(i=0;i<wnum;++i)
  {
    if(c<wc[i])
      c=wc[i];
  }

  /*Printing the Histogram Finally*/ 
  for(i=c;i>0;--i)
  {
    for(count=0;count<wnum;++count)
    {
      if(wc[count]-i<0)
        printf("  ");
      else printf("x ");
    }
    printf("\n");
  }
}

