#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_anagram(char str1[], char str2[])
{
    for (int i = 0; i < (int)strlen(str1); i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}

int find_idx_min(int size, char tab[size])
{
    char min = tab[0];
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

void swap(int size, char tab[size], int idx_x, int idx_y)
{
    int tmp = tab[idx_x];
    tab[idx_x] = tab[idx_y];
    tab[idx_y] = tmp;
}

void selection_sort(int size, char tab[size])
{
    int last_idx = size;
    for (int i = 0; i < size; i++)
    {
        int idx_min = find_idx_min(last_idx, tab);
        last_idx--;
        swap(size, tab, idx_min, last_idx);
    }
}

int main()
{
    char str1[] = "kyak";
    char str2[] = "kyka";
    selection_sort(strlen(str1), str1);
    selection_sort(strlen(str2), str2);
    if (is_anagram(str1, str2) == 1)
    {
        printf("Is anagram !");
    }
    else
    {
        printf("Is not anagram");
    }
}