#include<stdio.h>
void main()
{
  int marks;
  int index;
  printf("Enter marks\n");
  scanf("%d", &marks);
  index = marks/10;
  switch (index)
  {
    case 10:
    case 9:
    case 8:
      printf("Honours");
      break;
    case 7:
    case 6:
      printf("first div");
      break;
    case 5:
      printf("second div");
      break;
    case 4:
      printf("third div");
      break;
    case 3:
    case 2:
    case 1:
    case 0:
      printf("fail");
      break;
  }
  printf("\n");
}

//remember that condition of input must be integer
//here index is float so it give error
