#ifndef MCCOMPLEX_H
#define MCCOMPLEX_H
#if __STDC_VERSION__ >= 199901L
//using a C99 compiler
#include <complex.h>
typedef float _Complex float_complex;
typedef double _Complex double_complex;
#else
typedef struct 
{
    float re, im;
} float_complex;

typedef struct 
{
    float re, im;
} double_complex;
#endif
#endif
