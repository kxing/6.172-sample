#include "student.h"

/**
 * Takes the square of an integer. Assumes that the result will fit into an int.
 */
int square(int x) {
  return x * x;
}

/**
 * Takes in an integer array and its length, and returns the sum of the elements
 * of the array. Assumes that the result will fit into an int.
 */
int sum(int* array, int length) {
  int running_total = 0;

  for (int i = 0; i < length; i++) {
    running_total += array[i];
  }

  return running_total;
}
