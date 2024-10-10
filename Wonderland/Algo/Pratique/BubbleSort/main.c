#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 50

void swap(int tab[], int i, int idx)
{
    int tmp = tab[i];
    tab[i] = tab[idx];
    tab[idx] = tmp;
}

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

void bubble_sort_rec(int size, int tab[], int i, int is_sorted) {
    if (i < size - 1) {
        if (tab[i] > tab[i + 1]) {
            swap(tab, i, i + 1);
            is_sorted = 0;
        }
        bubble_sort_rec(size, tab, i + 1, is_sorted);
    } else if (i == size - 1 && is_sorted == 0) {
        // If a swap occurred in the last pass, perform another pass
        bubble_sort_rec(size, tab, 0, 1);
    }
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

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int size = atoi(argv[1]);
    int tab[size];
    init_tab(size, tab);
    print_tab(size, tab);
    bubble_sort_rec(size, tab, 0, 0);
    print_tab(size, tab);

    return 0;
}
