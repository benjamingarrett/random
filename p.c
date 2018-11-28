#include<math.h>
#include<stdio.h>
#include<stdint.h>
#include"random.h"

int main(){
  int capacity = 40;
  int c[capacity];
  for(int64_t g = 0; g < capacity; g++){
    c[g] = 0;
  }
  int64_t max_x = 0;
  for(int64_t g = 0; g < 100000; g++){
    int64_t x = rand_in_range_exponential(1, 5, 0.9);
    max_x = (max_x < x) ? x : max_x;
    printf("%ld\n", x);
    c[x-1]++;
  }
  printf("%ld\n", max_x);
  for(int64_t g = 0; g < capacity; g++){
    printf("%ld\n", c[g]);
  }
}
