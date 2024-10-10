#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "utils.h"
#include "bubble_sort.h"
#include "insert_sort.h"

#define MAX 100
#define ITER 100

void test_insert_sort(int size, int tab[])
{
    init_tab(size, tab);
    for (int i = 0; i < ITER; i++)
    {
        insert_sort(size, tab);
    }
    struct timespec tstart = {0, 0}, tend = {0, 0};
    clock_gettime(CLOCK_MONOTONIC, &tstart);
    for (int i = 0; i < ITER; i++)
    {
        insert_sort(size, tab);
    }
    clock_gettime(CLOCK_MONOTONIC, &tend);
    float res = ((double)tend.tv_sec + 1e-9 * tend.tv_nsec) -
                ((double)tstart.tv_sec + 1e-9 * tstart.tv_nsec);
    printf("Moyenne de temps d'exectution = %f", res / ITER);
}

void test_bubble_sort(int size, int tab[])
{
    init_tab(size, tab);
    for (int i = 0; i < ITER; i++)
    {
        bubble_sort(size, tab);
    }
    struct timespec tstart = {0, 0}, tend = {0, 0};
    clock_gettime(CLOCK_MONOTONIC, &tstart);
    for (int i = 0; i < ITER; i++)
    {
        bubble_sort(size, tab);
    }
    clock_gettime(CLOCK_MONOTONIC, &tend);
    float res = ((double)tend.tv_sec + 1e-9 * tend.tv_nsec) -
                ((double)tstart.tv_sec + 1e-9 * tstart.tv_nsec);
    printf("Moyenne de temps d'exectution = %f", res / ITER);
}

int main(int argc, char const *argv[])
{
    int size = atoi(argv[2]);
    int tab[size];

    switch (atoi(argv[1]))
    {
    case 1:
        test_bubble_sort(size, tab);
        break;
    case 2:
        test_insert_sort(size, tab);
    default:
        break;
    }

    return 0;
}
