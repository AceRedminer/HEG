#ifndef _FRACTIONS_H_
#define _FRACTIONS_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct fraction fraction_t;
typedef struct fraction
{
    int num, denom;
} fraction_t;

void print_frac(fraction_t frac);
fraction_t get_irreductible_frac(fraction_t frac);
fraction_t elevate_irreductible(fraction_t frac, int x);
void fraction_init(fraction_t *frac, int num, int denom);
void fraction_add_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res);
void fraction_sub_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res);
void fraction_mul_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res);
void fraction_div_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res);

fraction_t fraction_add(fraction_t frac1, fraction_t frac2);
fraction_t fraction_sub(fraction_t frac1, fraction_t frac2);
fraction_t fraction_mul(fraction_t frac1, fraction_t frac2);
fraction_t fraction_div(fraction_t frac1, fraction_t frac2);
double fraction_to_double(fraction_t frac1);

#endif
