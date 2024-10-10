#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void swap(int size, int tab[size], int x, int y)
{
    int temp = tab[x];
    tab[x] = tab[y];
    tab[y] = temp;
}

void set_bigger(int size, int tab[size])
{
    int bigger_idx = 0;
    int bigger = tab[bigger_idx];
    for (int i = 0; i < size; i++)
    {
        if (bigger < tab[i])
        {
            bigger = tab[i];
            bigger_idx = i;
        }
    }
    swap(size, tab, bigger_idx, (size - 1));
}

void sort(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        set_bigger(size - i, tab);
    }
}

int get_median(int size, int tab[size])
{
    sort(size, tab);
    int median = 0;
    if (size % 2 == 0)
    {
        median = (tab[(size - 1) / 2] + tab[(size - 1) / 2]) / 2;
    }
    else
    {
        median = tab[(size - 1) / 2];
    }
    return median;
}

float calc_avg(int size, int tab[size])
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += tab[i];
    }
    float avg = (float)total / size;
    return avg;
}

int calc_var(int size, int tab[size])
{
    int avg = calc_avg(size, tab);
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += pow((tab[i] - avg), 2);
    }
    int variance = total / size;
    return variance;
}

int find_idx(int size, int tab[size], int to_find)
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] == to_find)
        {
            return i;
        }
    }
    return 0;
}

int find_smaller(int size, int tab[size])
{
    int smaller_idx = 0;
    int smaller = tab[smaller_idx];
    for (int i = 0; i < size; i++)
    {
        if (smaller > tab[i])
        {
            smaller = tab[i];
        }
    }
    return smaller;
}

void fill_tab(int size, int tab[size])
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % (size / 10);
    }
}

void print_tab(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d : %d \n", i, tab[i]);
    }
}

void print_tab_hor(int size, int tab[size])
{
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            printf("%d : %d | ", i, tab[i]);
        }
        else
        {
            printf("%d : %d", i, tab[i]);
        }
    }
    printf("\n");
}

void count_histo(int size, int tab[size], int histo[(size / 10)])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size / 10); j++)
        {
            if (tab[i] == j)
            {
                histo[j] += 1;
            }
        }
    }
}

void count_repet_histo(int size, int histo[(size / 10)])
{
    for (int i = 0; i < (size / 10); i++)
    {
        histo[i] /= 2;
    }
}

void init_histo(int size, int histo[size])
{
    for (int i = 0; i < size; i++)
    {
        histo[i] = 0;
    }
}

int main()
{
    int size;
    printf("Veuillez choisir la taille du tableau : ");
    scanf("%d", &size);
    int tab[size];
    fill_tab(size, tab);
    set_bigger(size, tab);
    print_tab(size, tab);
    printf("Smaller : %d \n", find_smaller(size, tab));
    printf("Choisissez un nombre dont vous voulez connaître l'indice : ");
    int to_find;
    scanf("%d", &to_find);
    int idx_to_find = find_idx(size, tab, to_find);
    printf("Index of %d is %d \n", to_find, idx_to_find);
    float avg = calc_avg(size, tab);
    printf("Average : %lf \n", avg);
    int variance = calc_var(size, tab);
    printf("Variance : %d \n", variance);
    sort(size, tab);
    print_tab(size, tab);
    int median = get_median(size, tab);
    printf("Median : %d \n", median);
    int histo[(size / 10)];
    init_histo((size / 10), histo);
    count_histo(size, tab, histo);
    int avg_histo = calc_avg((size / 10), histo);
    int variance_histo = calc_var((size / 10), histo);
    int median_histo = get_median((size / 10), histo);
    print_tab((size / 10), histo);
    print_tab_hor((size / 10), histo);
    printf("Average histo : %d \n", avg_histo);
    printf("Variance histo : %d \n", variance_histo);
    printf("Median histo : %d \n", median_histo);
    count_repet_histo(size, histo);
    print_tab_hor((size / 10), histo);
}