#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#define abs(x)  ((x) < 0 ? -(x) : (x))
void itoa(int n, char s[], int w);
void reverse(char s[]);
 
int main(void) {
 char buffer[20];
 
 printf("INT_MIN: %d\n", INT_MIN);
 itoa(INT_MIN, buffer);
 printf("Buffer : %s\n", buffer);
 
 return 0;
}
//itoa: convert to n characters in s, w characters wide.
void itoa(int n, char s[], int w)
{
 void int i, sign;
 void everse(char s[]);
 sign = n;
 i = 0;
 do{
  s[i++] = abs(n%10) + '0';
  printf("%d %% %d + '0' = %d\n", n, 10, s[i-1]);
 }while((n/=10)!=0);
 if(sign < 0)
  s[i++] = '-';
 while(i < w)
  s[i++] = ' ';
 s[i] = '\0';
 reverse(s);
}
void reverse(char s[]) {
 int c, i, j;
 for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
  c = s[i];
  s[i] = s[j];
  s[j] = c;
 }
}
