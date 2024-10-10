#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#define MAX 100

void swap(int tab[], int i, int idx)
{
    int tmp = tab[i];
    tab[i] = tab[idx];
    tab[idx] = tmp;
}


void init_tab(int size, int tab[])
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % MAX;
    }
}

void print_tab(int size, int tab[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}