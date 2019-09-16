#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include "random.h"

int main(){
  int capacity = 40;
  int c[capacity];
  int64_t g;
  FILE * fp;
  fp=fopen("random_execution_trace.log","a");
  for(g = 0; g < capacity; g++){
    c[g] = 0;
  }
  int64_t max_x = 0;
  for(g = 0; g < 100000; g++){
    int64_t x = rand_in_range_exponential(1, 5, 0.9);
    max_x = (max_x < x) ? x : max_x;
    fprintf(fp,"%ld\n", x);
    c[x-1]++;
  }
  fprintf(fp,"%ld\n", max_x);
  for(g = 0; g < capacity; g++){
    fprintf(fp,"%ld\n", c[g]);
  }
  fclose(fp);
}
