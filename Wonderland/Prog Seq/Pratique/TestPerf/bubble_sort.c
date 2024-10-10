#include "utils.h"
#include "bubble_sort.h"

void bubble_sort(int size, int tab[])
{
    int is_sorted = 0;
    while (is_sorted == 0)
    {
        is_sorted = 1;
        for (int i = 0; i < size - 1; i++)
        {
            if (tab[i] > tab[i + 1])
            {
                swap(tab, i, (i + 1));
                is_sorted = 0;
            }
        }
    }
}

