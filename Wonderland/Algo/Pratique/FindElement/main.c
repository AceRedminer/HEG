#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int find_element_opti(int size, int tab[], int element)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (tab[mid] < element)
        {
            left = mid + 1;
        }
        else if (tab[mid] > element)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int find_element(int size, int tab[], int element)
{
    for (int i = 0; i < size; i++)
    {
        if (tab[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void init_tab(int size, int tab[], int max)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] = rand() % max;
    }
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int size = atoi(argv[1]);
    int tab[size];
    int max = atoi(argv[2]);
    int element = atoi(argv[3]);
    init_tab(size, tab, max);
    int idx_element = find_element_opti(size, tab, element);
    idx_element != -1 ? printf("L'idx de %d est %d \n", element, idx_element) : printf("%d n'apparait pas dans la liste \n", element);
    return 0;
}
