#include <stdio.h>
#include <stdlib.h>

void swap(int tab[], int idx, int idx_min)
{
    int tmp = tab[idx];
    tab[idx] = tab[idx_min];
    tab[idx_min] = tmp;
}

void find_minidx(int size, int tab[], int minidx[], int idx)
{
    minidx[0] = tab[idx];
    for (int i = idx; i < size; i++)
    {
        if (minidx[0] > tab[i])
        {
            minidx[0] = tab[i];
            minidx[1] = i;
        }
    }
}

void select_sort(int size, int tab[])
{
    int minidx[2];
    for (int i = 0; i < size; i++)
    {
        find_minidx(size, tab, minidx, i);
        swap(tab, i, minidx[1]);
    }
}

int main()
{
    int tab[10] = {1, 5, 3, 2, 6, 7, 3, 4, 2, 1};
    select_sort(10, tab);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}
