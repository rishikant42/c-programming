#include<stdio.h>

typedef struct {
  int maths;
  int physics;
  int chem;
}mark;

mark deviation(mark student1, mark student2);

int main() {
  mark student;

  student.maths = 87;
  student.chem = 67;
  student.physics = 96;

  mark avg;

  avg.maths = 55;
  avg.chem = 45;
  avg.physics = 34;

  mark dev = deviation(student, avg);
  printf("%d %d %d\n", dev.maths, dev.chem, dev.physics);

  return 0;
}

mark deviation(mark student, mark student2){
  mark dev;

  dev.maths = student.maths - student2.maths;
  dev.chem = student.chem - student2.chem;
  dev.physics = student.physics - student2.physics;

  return dev;
}
