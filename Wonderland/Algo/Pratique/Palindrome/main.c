#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int is_palindrome_rec(int size, char string[], int i)
{
    if (i < ceil(size / 2))
    {
        if (string[i] == string[(size - 1) - i])
        {
            return is_palindrome_rec(size, string, ++i);
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int is_palindrome(int size, char string[])
{
    for (int i = 0; i < size; i++)
    {
        if (string[i] != string[(size - 1) - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char string[] = "kayak";
    if (is_palindrome_rec(strlen(string), string, 0) == 1)
    {
        printf("Is palindrome");
    }
    else
    {
        printf("Isn't palindrome");
    }
}