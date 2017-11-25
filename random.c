#include "random.h"

int64_t rand_in_range(int64_t min, int64_t max) {

  int64_t g;

  g = min + (double) (max - min) * (double) rand() / (double) RAND_MAX;
  return g;
}

double random_double() {

  return (double) rand() / (double) RAND_MAX;
}