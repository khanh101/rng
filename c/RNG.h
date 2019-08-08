#ifndef _RNG_PUBLIC_H_
#define _RNG_PUBLIC_H_
#include<stdint.h>
typedef struct rng RNG;
typedef struct rng_trait RNG_TRAIT;
struct rng_trait {
  RNG* (*New)(int64_t seed[6]);
  double (*Next)(RNG* this);
};
RNG_TRAIT _RNG;
#endif