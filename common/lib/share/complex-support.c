
#if __STDC_VERSION__ >= 199901L
//creal, cimag already defined in complex.h

inline float_complex make_complex_float(float real, float imag)
{
   return real + imag * I;
}

#ifndef MCCOMPLEX
#define MCCOMPLEX
#include "complex-support.h"
inline double_complex make_complex_double(double real, double imag)
{
   return real + imag * I;
}

#else
#define creal(z) ((z).re)
#define cimag(z) ((z).im)

extern const complex_float complex_j; //put in a translation unit somewhere
extern const complex_double complex_i; //put in a translation unit somewhere
#define J complex_j
#define I complex_i

inline complex_float make_complex_float(float real, float imag)
{
    complex_float z = {real, imag};
    return z;
}

inline complex_double make_complex_double(double real, double imag)
{
    complex_double z = {real, imag};
    return z;
}
#endif
#endif
