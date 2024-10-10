#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "fractions.h"

int main()
{
    fraction_t frac1;
    fraction_t frac2;
    fraction_init(&frac1, 6, 7);
    fraction_init(&frac2, 9, 5);

    fraction_t frac_res;

    fraction_add_inplace(frac1, frac2, &frac_res);
    print_frac(frac_res);

    fraction_sub_inplace(frac1, frac2, &frac_res);
    print_frac(frac_res);

    fraction_mul_inplace(frac1, frac2, &frac_res);
    print_frac(frac_res);

    fraction_div_inplace(frac1, frac2, &frac_res);
    print_frac(frac_res);

    print_frac(get_irreductible_frac(frac_res));

    print_frac(elevate_irreductible(frac_res, -2));

    printf("%lf \n", fraction_to_double(frac1));
}