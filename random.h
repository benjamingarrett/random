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

  int64_t rand_in_range(int64_t min, int64_t max);
  double random_double();
  int64_t rand_in_range_exponential(int64_t min, int64_t max, double lambda);

#ifdef __cplusplus
}
#endif

#endif /* RANDOM_H */

