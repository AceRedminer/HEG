/*
rien radix_sort(entier taille, entier tab[taille]):
# initialisation
    entier val_min = valeur_min(taille, tab)
    entier val_max = valeur_max(taille, tab)
    decaler(taille, tab, val_min)
    entier nb_bits = nombre_de_bits(val_max - val_min)
# algo
    entier tab_tmp[taille]
    pour pos de 0 à nb_bits:
        alveole_0(taille, tab, tab_tmp, pos) # 0 -> taille
        alveole_1(taille, tab, tab_tmp, pos) # taille -> 0
        echanger(tab, tab_tmp)
# post-traitement
    decaler(taille, tab, -val_min)

rien decaler(entier taille, entier tab[taille], entier val):
    pour i de 0 à taille-1:
    taille[i] -= val

rien alveole_0(entier taille, entier tab[taille],
    entier tab_tmp[taille], entier pos):
    entier k = 0
    pour i de 0 à taille-1:
        si bit(tab[i], pos) == 0:
            tab_tmp[k] = tab[i]
            k = k + 1

rien alveole_1(entier taille, entier tab[taille],
    entier tab_tmp[taille], entier pos):
    entier k = size-1
    pour i de 0 à taille-1:
        si bit(tab[i], pos) == 0:
            tab_tmp[k] = tab[i]
            k = k - 1
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void swap(int *tab[], int *tab_tmp[])
{
    int *tmp = *tab_tmp;
    *tab_tmp = *tab;
    *tab = tmp;
}

void print_tab(int size, int tab[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int find_min(int size, int tab[])
{
    int min = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    return min;
}

int find_max(int size, int tab[])
{
    int max = tab[0];
    for (int i = 0; i < size; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}

int get_nb_bits(int x)
{
    int n = 0;
    while (pow(2, n) <= x)
    {
        n++;
    }
    return n;
}

void dec_to_bin(int x, int bin[], int nb_bits)
{
    int n = get_nb_bits(x);
    int tmp[n];

    n = (n > nb_bits) ? n : nb_bits; // Use the maximum of 'n' and 'numBits'

    for (int i = 0; i < n; i++)
    {
        bin[i] = (int)(x / pow(2, n - 1 - i));
        x = x % (int)pow(2, n - 1 - i);
    }
    bin = tmp;
}

void decaler(int size, int tab[], int min)
{
    for (int i = 0; i < size; i++)
    {
        tab[i] -= min;
    }
}

int bit(int x, int pos)
{
    int val = 0;
    for (int i = 0; i <= pos; i++)
    {
        val = x % 2;
        x /= 2;
    }
    return val;
}

void alveole0(int size, int tab[size], int tab_tmp[size], int pos, int nb_bits)
{
    int y = 0;
    for (int i = 0; i < size; i++)
    {
        int bin[nb_bits];
        dec_to_bin(tab[i], bin, nb_bits);
        if (bit(tab[i], pos) == 0)
        {
            tab_tmp[y] = tab[i];
            y++;
        }
    }
}

void alveole1(int size, int tab[size], int tab_tmp[size], int pos, int nb_bits)
{
    int z = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        int bin[nb_bits];
        dec_to_bin(tab[i], bin, nb_bits);
        if (bit(tab[i], pos) == 1)
        {
            tab_tmp[z] = tab[i];
            z--;
        }
    }
}

void copy_tab(int size, int tab1[], int tab2[])
{
    for (int i = 0; i < size; i++)
    {
        tab1[i] = tab2[i];
    }
}

void radix_sort(int size, int tab[size], int tab_tmp[size])
{
    int val_min = find_min(size, tab);
    int val_max = find_max(size, tab);
    decaler(size, tab, val_min);
    int nb_bits = get_nb_bits(val_max - val_min);
    printf("Tab de base :\n");
    print_tab(size, tab);
    printf("\n");
    for (int pos = 0; pos % 2 == 1 ? pos <= nb_bits : pos < nb_bits; pos++)
    {
        alveole0(size, tab, tab_tmp, pos, nb_bits);
        alveole1(size, tab, tab_tmp, pos, nb_bits);
        swap(&tab, &tab_tmp);
        print_tab(size, tab);
        printf("\n");
    }
    decaler(size, tab, -val_min);
}

int main()
{
    int size = 11;
    int tab[11] = {0, -4, 5, 10, -8, -7, 26, 9, 3, -2, 6};
    int tab_tmp[11];
    radix_sort(size, tab, tab_tmp);
    printf("Tab : \n");
    print_tab(size, tab);
}
