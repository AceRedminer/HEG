#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void dec_to_bin(int n, int x, int bin[n])
{
    while (n >= 0)
    {
        bin[n] = (int)(x / pow(2, n));
        x = x % (int)pow(2, n);
        printf("%d", bin[n]);
        n--;
    }
}

int bin_to_dec(int n, int bin[n])
{
    int res = 0;
    for (int i = n; i >= 0; i--)
    {
        res += pow(2, i) * bin[i];
    }
    return res;
}

int main()
{
    int x;
    printf("Veuillez choisir un chiffre a convertir en binaire : ");
    scanf("%d", &x);
    int n = 0;
    while (pow(2, n) <= x)
    {
        n++;
    }
    int bin[n];
    n--;
    printf("%d => ", x);
    dec_to_bin(n, x, bin);
    int bin_dec = bin_to_dec(n, bin);
    printf(" => %d", bin_dec);
}