/* 
 * File:   random.h
 * Author: benjamin
 *
 * Created on August 25, 2015, 1:13 AM
 */

#ifndef RANDOM_H
#define RANDOM_H

#ifdef __cplusplus
extern "C" {
#endif

#include<stdint.h>
#include<stdlib.h>
  int64_t rand_in_range(int64_t min, int64_t max);
  double random_double();

#ifdef __cplusplus
}
#endif

#endif /* RANDOM_H */

