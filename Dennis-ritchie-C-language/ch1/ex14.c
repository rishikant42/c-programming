#include <stdio.h>

#define NUM_CHARS 128
#define IN_WORD 1
#define OUT_WORD 0

int main()
{
  int c;
  int char_freq[NUM_CHARS + 1];
  int i;

  for (i = 0; i <= NUM_CHARS; ++i)
    char_freq[i] = 0;

  printf("Input characters\n");
  while ((c = getchar()) != EOF)
    ++char_freq[c];

  printf("\n ASCII | Count\n");
  for (i = 0; i <= NUM_CHARS; ++i) 
    if (char_freq[i] > 0)
      printf(" %5d : %5d\n", i, char_freq[i]);

  return 0;
}
