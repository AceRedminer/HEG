#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int find_idx_min(int size, int tab[size])
{
    int min = tab[0];
    int idx_min = 0;
    for (int i = 0; i < size; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
            idx_min = i;
        }
    }
    return idx_min;
}

void swap(int size, int tab[size], int idx_x, int idx_y)
{
    int tmp = tab[idx_x];
    tab[idx_x] = tab[idx_y];
    tab[idx_y] = tmp;
}

void selection_sort(int size, int tab[size])
{
    int last_idx = size;
    for (int i = 0; i < size; i++)
    {
        int idx_min = find_idx_min(last_idx, tab);
        last_idx--;
        swap(size, tab, idx_min, last_idx);
    }
}

void print_tab(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", tab[i]);
    }
}

void init_tab(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % 10;
    }
}

int main()
{
    int size = 20, tab[size];
    init_tab(size, tab);
    selection_sort(size, tab);
    print_tab(size, tab);
}