#include <stdio.h>

#include "student.h"

int main() {
  printf("Hello world!\n");

  printf("28 squared is: %d\n", square(28));

  int array[] = {1, 6, 7, 8, 10};
  printf("The sum of 1, 6, 7, 8, and 10 is: %d\n", sum(array, sizeof(array) / sizeof(int)));
  return 0;
}

