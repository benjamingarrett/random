#include "random.h"
#include<stdio.h>
int64_t rand_in_range(int64_t min, int64_t max) {
  return min + (double) (max - min) * (double) rand() / (double) RAND_MAX;
}

double random_double() {
  return (double) rand() / (double) RAND_MAX;
}

int64_t rand_in_range_exponential(int64_t min, int64_t max, double lambda){
  double d = random_double();
  double x = (1.0) / (-1.0) * log(d) / lambda;
  //printf("%f\n", x);
  //double z = (double)min + (double)(max - min) * x;
  //printf("%f %ld\n", z, (int64_t)z);
  return (int64_t)x;
}
