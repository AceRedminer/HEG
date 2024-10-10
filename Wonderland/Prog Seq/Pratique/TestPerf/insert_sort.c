#include "insert_sort.h"

void insert_sort(int size, int tab[])
{
    for (int i = 1; i < size; i++)
    {
        int tmp = tab[i];
        int pos = i;
        while (pos > 0 && tab[pos - 1] > tmp)
        {
            tab[pos] = tab[pos - 1];
            pos = pos - 1;
        }
        tab[pos] = tmp;
    }
}
