#include <stdlib.h>
#include <stdio.h>
 
void itob(int n, char s[], int b);
void reverse(char s[]);
 
int main(void) {
 char buffer[10];
 int i;
 
 for ( i = 2; i <= 20; ++i ) {
  itob(255, buffer, i);
  printf("Decimal 255 in base %-2d : %s\n", i, buffer);
 }
 return 0;
}
 
 
/*  itob: convert n to charecters in s - base b */
 
void itob(int n, char s[], int b) {
 
 int i, j, sign;
 void reverse(char s[]);
 
 
 if ((sign = n) < 0)
  n = -n;
 i = 0;
 do {
  j = n%b;
  s[i++] = (j <= 9) ? j+'0' : j+'a'-10;
 } while ((n /= b) > 0);
 if (sign < 0)
  s[i++] = '-';
 s[i] = '\0';
 reverse(s);
}
 
 
/*  Reverses string s[] in place  */
 
void reverse(char s[]) {
 int c, i, j;
 for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
  c = s[i];
  s[i] = s[j];
  s[j] = c;
 }
}

