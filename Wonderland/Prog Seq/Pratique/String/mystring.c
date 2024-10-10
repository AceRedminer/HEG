#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "mystring.h"

int string_cat(size_t dest_max_size, char *dest, char *src)
{
    size_t src_size = string_len(src);
    size_t dest_size = string_len(dest);
    if ((src_size + dest_size) > dest_max_size)
    {
        return 1;
    }
    else
    {
        for (size_t i = 0; i <= src_size; i++)
        {
            dest[(dest_size + i)] = src[i];
        }
        return 0;
    }
}

char *string_chr(char *s, char c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return &s[i];
        }
        i++;
    }
    return NULL;
}

bool string_cmp(char *s1, char *s2)
{
    size_t s1_len = string_len(s1);
    size_t s2_len = string_len(s2);
    if (s1_len != s2_len)
    {
        return false;
    }
    else
    {
        for (size_t i = 0; i < s1_len; i++)
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
        }
    }
    return true;
}

int string_cpy(size_t dest_size, char *dest, char *src)
{
    size_t src_size = string_len(src);
    if (dest_size < src_size)
    {
        return 1;
    }
    for (size_t i = 0; i < src_size; i++)
    {
        dest[i] = src[i];
    }
    return 0;
}

size_t string_len(char *s)
{
    int i = 0;
    size_t count = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int string_ncat(size_t dest_max_size, char *dest, char *src, size_t n)
{
    size_t src_size = string_len(src);
    size_t dest_size = string_len(dest);
    if ((src_size + dest_size) > dest_max_size)
    {
        return 1;
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            dest[(dest_size + i)] = src[i];
        }
        return 0;
    }
}

bool string_ncmp(char *s1, char *s2, size_t n)
{
    size_t s1_len = string_len(s1);
    size_t s2_len = string_len(s2);
    if (s1_len != s2_len)
    {
        return false;
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                return false;
            }
        }
    }
    return true;
}

int string_ncpy(char *dest, char *src, size_t n)
{
    size_t src_size = string_len(src);
    size_t dest_size = string_len(dest);
    if (dest_size < n || src_size < n)
    {
        return 1;
    }
    int end_idx = 0;
    for (size_t i = 0; i < n; i++)
    {
        dest[i] = src[i];
        end_idx = i;
    }
    dest[end_idx + 1] = '\0';

    return 0;
}

size_t string_cnt_chr(char *s, char c)
{
    int i = 0;
    int count_occ = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            count_occ++;
        }
        i++;
    }
    return count_occ;
}

void string_fry(char *s) {
    size_t len = string_len(s);
    srand(time(NULL));
    for (size_t i = 0; i < len - 1; i++) {
        size_t j = i + rand() % (len - i);
        char s_tmp = s[i];
        s[i] = s[j];
        s[j] = s_tmp;
    }
}