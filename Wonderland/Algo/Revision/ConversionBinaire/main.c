#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void dec_to_bin(int x, int bin[], int nb_bits)
{
    for (int i = 0; i < nb_bits; i++)
    {
        bin[i] = x % 2;
        x /= 2;
    }
}

int bin_to_dec(int bin[], int nb_bits)
{
    int dec = 0;
    for (int i = nb_bits - 1; i >= 0; i--)
    {
        dec += bin[i] * pow(2, i);
    }
    return dec;
}

int count_bits(int x)
{
    int bits = 0;
    while (x > 0)
    {
        bits++;
        x /= 2;
    }
    return bits;
}

void print_bin(int bin[], int nb_bits)
{
    for (int i = nb_bits - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int nb_bits = count_bits(x);
    int bin[nb_bits];
    dec_to_bin(x, bin, nb_bits);
    print_bin(bin, nb_bits);
    int dec = bin_to_dec(bin, nb_bits);
    printf("%d \n", dec);
    return 0;
}
