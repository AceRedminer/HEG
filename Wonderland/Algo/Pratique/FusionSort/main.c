#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void print_tab(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void init_tab(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % 10;
    }
}

void fusion(int n, int tab1[], int tab2[], int res[])
{
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab1[idx1] < tab2[idx2])
        {
            res[i] = tab1[idx1];
            idx1++;
        }
        else
        {
            res[i] = tab2[idx2];
            idx2++;
        }
    }
}

int main()
{
    srand(time(NULL));
    int n = 10;
    int tab1[n];
    init_tab(n, tab1);
    int tab2[n];
    init_tab(n, tab2);
    int res[n];
    printf("Tab 1 : \n");
    print_tab(n, tab1);
    printf("Tab 1 : \n");
    print_tab(n, tab2);
    fusion(n, tab1, tab2, res);
    printf("Res : \n");
    print_tab(n, res);
}