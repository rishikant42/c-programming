#include<stdio.h>

main() {
  printf("Hello,\c world\n");
}

// output

/*
1$ gcc ex2.c 
ex2.c: In function ‘main’:
ex2.c:4:10: warning: unknown escape sequence: '\c' [enabled by default]
   printf("Hello,\c world\n");
             ^
$ ./a.out 
Hello,c world
*/
