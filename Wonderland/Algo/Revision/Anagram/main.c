#include <stdlib.h>
#include <stdio.h>

int str_length(char str[])
{
    int i = 1;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void find_minidx(int str_length, char str[], int minidx[], int i)
{
    minidx[0] = str[i];
    minidx[1] = i;
    for (int j = i; j < str_length; j++)
    {
        if (minidx[0] > str[j])
        {
            minidx[0] = str[j];
            minidx[1] = j;
        }
    }
}

void swap(char str[], int idx, int idx_min)
{
    char tmp = str[idx];
    str[idx] = str[idx_min];
    str[idx_min] = tmp;
}

void select_sort(int str_length, char str[])
{
    int minidx[2];
    for (int i = 0; i < str_length; i++)
    {
        find_minidx(str_length, str, minidx, i);
        swap(str, i, minidx[1]);
    }
}

int is_anagram(char str1[], char str2[])
{
    int str1_len = str_length(str1);
    int str2_len = str_length(str2);
    if (str1_len != str2_len)
    {
        return 0; // pas anagram si pas même taille
    }
    select_sort(str1_len, str1);
    select_sort(str2_len, str2);
    for (int i = 0; i < str1_len; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }
    return 1;
}

void string_cpy(char str[], char res[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        res[i] = str[i];
    }
    res[i] = '\0';
}

int main(int argc, char *argv[])
{
    char *str1_tmp = argv[1];
    char *str2_tmp = argv[2];
    char str1[str_length(str1_tmp)];
    char str2[str_length(str2_tmp)];
    string_cpy(str1_tmp, str1);
    string_cpy(str2_tmp, str2);
    int res = is_anagram(str1_tmp, str2_tmp);
    res == 0 ? printf("%s et %s ne sont pas des anagrammes", str1, str2) : printf("%s et %s sont des anagrammes", str1, str2);
    return 0;
}
