int main()
{
  int *pc;
  int c;

  c=22;

  printf("Address of c : %u\n", &c);
  printf("Value of c : %d\n\n", c);

  pc = &c;

  printf("Address of ptr pc : %u\n", pc);
  printf("Content of ptr pc : %d\n\n", *pc);

  c = 11;

  printf("Address of ptr pc : %u\n", pc);
  printf("Content of ptr pc : %d\n\n", *pc);

  *pc = 2;

  printf("Address of c : %u\n", &c);
  printf("Value of c : %d\n\n", c);

  return 0;
}
