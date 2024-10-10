#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int find_min(int size, int tab[size])
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
    return min;
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
    srand(time(NULL));
    int size = 10;
    int tab[size];
    init_tab(size, tab);
    print_tab(size, tab);
    int min = find_min(size, tab);
    printf("Minimun du tableau = %d \n", min);
}