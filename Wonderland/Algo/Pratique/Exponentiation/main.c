#include <stdlib.h>
#include <stdio.h>

int expo(int x, int n)
{
    if (n != 0)
    {
        return x * expo(x, n - 1);
    }
    else
    {
        return 1;
    }
}

int indienne(int x, int n)
{
    if (n != 0)
    {
        if (n == 1)
        {
            return x;
        }
        else if (n % 2 == 0)
        {
            return indienne(x, n / 2) * indienne(x, n / 2);
        }
        else
        {
            return x * indienne(x, n - 1);
        }
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x, n;
    printf("Veuillez rentrez x pour le mettre à la puissance n : ");
    scanf("%d %d", &x, &n);
    int res = indienne(x, n);
    printf("%d puissance %d = %d", x, n, res);
}