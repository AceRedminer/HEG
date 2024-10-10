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
    insert_sort(size, tab);
    print_tab(size, tab);

    return 0;
}
