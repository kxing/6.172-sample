#include "student.h"

int square(int x) {
  return x * x;
}

int sum(int* array, int length) {
  int running_total = 0;

  for (int i = 0; i < length; i++) {
    running_total += array[i];
  }

  return running_total;
}
