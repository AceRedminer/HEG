#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double middle_value(double a1, double b1){
    return (b1 + a1) / 2;
}

double g(double x){
    
    double res = pow(x, 5) + 2 * pow(x, 4) + pow(x, 3) + pow(x, 2) - 1;
    return res;
}

int check_sign(double x){
    if (x < 0)
    {
        return 0;
    }else
    {
        return 1;
    }
}

int bissect(double a1, double b1, double epsilon, double *zero){
    int sign_a1, sign_b1;
    double c1, temp_c1;
    sign_a1 = check_sign(a1);
    sign_b1 = check_sign(b1);
    if (sign_a1 != sign_b1)
    {
        while (fabs(b1 - a1) > epsilon)
        {
            c1 = middle_value(a1, b1);
            printf("%lf \n", c1);
            temp_c1 = g(c1);
            int sign_c1 = check_sign(temp_c1);
            *zero = c1;
            if (sign_c1 != sign_a1)
            {
                b1 = c1;
            }else if (sign_c1 != sign_b1){
                a1 = c1;
            }
        }
    }
}

int main(){
    double a1, b1, epsilon, zero;
    printf("Veuillez choisir les bornes a1 et b1 (a1 < b1) de l'intervalle, ainsi que epsilon : ");
    scanf("%lf %lf %lf", &a1, &b1, &epsilon);
    bissect(a1, b1, epsilon, &zero);
    printf("%lf", zero);
}