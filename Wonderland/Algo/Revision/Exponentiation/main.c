#include <stdlib.h>
#include <stdio.h>

int expo_rec(int x, int n)
{
    if (n > 0)
    {
        return x * expo_rec(x, n - 1);
    }else
    {
        return 1;
    }
    
}

int expo(int x, int n)
{
    int xn = 1;
    for (int i = 0; i < n; i++)
    {
        xn *= x;
    }
    return xn;
}

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int n = atoi(argv[2]);
    int x_pow_n = expo_rec(x, n);
    printf("%d pow %d = %d \n", x, n, x_pow_n);
    return 0;
}
