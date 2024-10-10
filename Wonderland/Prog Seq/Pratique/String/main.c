#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "mystring.h"

#define SIZE 255

int main()
{
    char str1[SIZE];
    char str2[SIZE];
    char str3[SIZE];
    printf("Rentrez une chaine de caractère de max 255 char (str1) : ");
    scanf("%s", str1);
    // string_len
    size_t str1_size = string_len(str1);
    printf("%s contient %zu char \n", str1, str1_size);
    // string_cpy
    bool did_copy = string_cpy(SIZE, str3, str1);
    if (did_copy == 0)
    {
        printf("La copie c'est bien effectué \n");
    }
    else
    {
        printf("La copie à échoué \n");
    }
    // string_cat
    printf("Rentrez une chaine de caractère de max 255 char (str2) : ");
    scanf("%s", str2);
    int cat_ret = string_cat(255, str3, str2);
    if (cat_ret == 1)
    {
        printf("La cat de %s et de %s n'a pas pu s'éxecuter car str1 ne peux pas contenir la chaîne \n", str1, str2);
    }
    else
    {
        printf("La cat de str1 et de str2 = %s \n", str3);
    }
    // string_chr
    char chr = 'o';
    char *c = string_chr(str1, chr);
    if (c != NULL)
    {
        printf("%c \n", *c);
    }
    else
    {
        printf("%c n'apparait pas dans %s \n", chr, str1);
    }
    // string_cmp
    bool is_equal = string_cmp(str1, str2);
    if (is_equal)
    {
        printf("%s et %s sont égales \n", str1, str2);
    }
    else
    {
        printf("%s et %s sont différentes \n", str1, str2);
    }
    // string_ncat
    int ncat_ret = string_ncat(255, str3, str2, 3);
    if (ncat_ret == 1)
    {
        printf("La ncat de %s et de %s n'a pas pu s'éxecuter car str1 ne peux pas contenir la chaîne \n", str1, str2);
    }
    else
    {
        printf("La ncat de str1 et de str2 = %s \n", str3);
    }
    // string_ncmp
    bool is_nequal = string_ncmp(str1, str2, 3);
    if (is_nequal)
    {
        printf("%s et %s sont égales pour les %d premiers char \n", str1, str2, 3);
    }
    else
    {
        printf("Les %d premiers char de %s et %s sont différentes \n", 3, str1, str2);
    }
    // string_ncpy
    char str4[255] = "Destination";
    char str5[255] = "Source";
    bool did_ncopy = string_ncpy(str4, str5, 3);
    if (did_ncopy == 0)
    {
        printf("La copie c'est bien effectué : %s\n", str4);
    }
    else
    {
        printf("La copie à échoué \n");
    }
    // string_cnt_chr
    char str6[255] = "aaabbbbbcccccccddddd";
    int occ = string_cnt_chr(str6, 'a');
    printf("Le char %c apparaît %d fois dans %s \n", 'a', occ, str6);
    // string_fry
    string_fry(str6);
    printf("%s \n", str6);
}