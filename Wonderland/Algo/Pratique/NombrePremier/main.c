#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define SIZE 10000

void eratosthene(int tab[SIZE])
{
    bool tab[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        tab[i] = true;
    }
    for (int i = 2; i < SIZE; i++)
    {
        if (tab[i])
        {
            printf("%d ", i);
            int j = i;
            while (j < SIZE)
            {
                j += i;
                tab[j] = false;
            }
        }
    }
}

int is_premier_rec(int x, int i)
{
    if (i <= sqrt(x))
    {
        if (x % i == 0)
        {
            return 0;
        }
        else
        {
            i++;
            return is_premier_rec(x, i);
        }
    }
    return 1;
}

int is_premier(int x)
{
    int i = 2;
    while (i <= sqrt(x))
    {
        if (x % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    printf("Choisir un nombre pour savoir si il est premier : ");
    int x;
    scanf("%d", &x);
    int res = is_premier_rec(x, 2);
    int tab[SIZE];
    if (res == 1)
    {
        printf("%d est premier \n", x);
    }
    else
    {
        printf("%d n'est pas premier \n", x);
    }
}