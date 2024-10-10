#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "fractions.h"

void fraction_init(fraction_t *frac, int num, int denom)
{
    frac->num = num;
    frac->denom = denom;
}

void print_frac(fraction_t frac)
{
    printf("%d/%d \n", frac.num, frac.denom);
}

int pgcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return pgcd(y, x % y);
    }
}

fraction_t get_irreductible_frac(fraction_t frac)
{
    int mul = pgcd(frac.num, frac.denom);
    frac.num /= mul;
    frac.denom /= mul;
    return frac;
}

fraction_t elevate_irreductible(fraction_t frac, int x)
{
    fraction_t frac_res;
    if (x < 0)
    {
        frac_res.num = pow(frac.denom, abs(x));
        frac_res.denom = pow(frac.num, abs(x));
    }
    else
    {
        frac_res.num = pow(frac.num, x);
        frac_res.denom = pow(frac.denom, x);
    }
    return get_irreductible_frac(frac_res);
}

void fraction_add_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res)
{
    frac_res->num = frac1.num * frac2.denom + frac2.num * frac1.denom;
    frac_res->denom = frac1.denom * frac2.denom;
}

void fraction_sub_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res)
{
    frac_res->num = frac1.num * frac2.denom - frac2.num * frac1.denom;
    frac_res->denom = frac1.denom * frac2.denom;
}

void fraction_mul_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res)
{
    frac_res->num = frac1.num * frac2.num;
    frac_res->denom = frac1.denom * frac2.denom;
}

void fraction_div_inplace(fraction_t frac1, fraction_t frac2, fraction_t *frac_res)
{
    frac_res->num = frac1.num * frac2.denom;
    frac_res->denom = frac1.denom * frac2.num;
}

fraction_t fraction_add(fraction_t frac1, fraction_t frac2)
{
    fraction_t frac_res;
    frac_res.num = frac1.num * frac2.denom + frac2.num * frac1.denom;
    frac_res.denom = frac1.denom * frac2.denom;
    return frac_res;
}

fraction_t fraction_sub(fraction_t frac1, fraction_t frac2)
{
    fraction_t frac_res;
    frac_res.num = frac1.num * frac2.denom - frac2.num * frac1.denom;
    frac_res.denom = frac1.denom * frac2.denom;
    return frac_res;
}

fraction_t fraction_mul(fraction_t frac1, fraction_t frac2)
{
    fraction_t frac_res;
    frac_res.num = frac1.num * frac2.num;
    frac_res.denom = frac1.denom * frac2.denom;
    return frac_res;
}

fraction_t fraction_div(fraction_t frac1, fraction_t frac2)
{
    fraction_t frac_res;
    frac_res.num = frac1.num * frac2.denom;
    frac_res.denom = frac1.denom * frac2.num;
    return frac_res;
}

double fraction_to_double(fraction_t frac1)
{
    return ((double)frac1.num / (double)frac1.denom);
}
