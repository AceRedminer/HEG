#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void copy_tab(int n, bool board[n][n], bool tmp_board[n][n])
{
    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n; c++)
        {
            tmp_board[l][c] = board[l][c];
        }
    }
}

void print_board(int n, bool board[n][n])
{
    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n; c++)
        {
            printf(" %d ", board[l][c]);
        }
        printf("\n");
    }
}

void place_queen(int n, bool board[n][n], int l, int c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = c; j < n; j++)
        {
            if (l == i || c == j || abs(l - i) == abs(c - j))
            {
                board[i][j] = false;
            }
        }
    }
}

void solutions(int n, bool board[n][n], int c, int *count)
{
    for (int l = 0; l < n; l++)
    {
        if (board[l][c] == true)
        {
            if (c < n - 1)
            {
                bool tmp_board[n][n];
                copy_tab(n, board, tmp_board);
                place_queen(n, tmp_board, l, c);
                solutions(n, tmp_board, c + 1, count);
            }
            else
            {
                *count += 1;
            }
        }
    }
}

void init_board(int n, bool board[n][n])
{
    for (int l = 0; l < n; l++)
    {
        for (int c = 0; c < n; c++)
        {
            board[l][c] = true;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    bool board[n][n];
    init_board(n, board);
    int count = 0;
    solutions(n, board, 0, &count);
    printf("Il y a %d solutions", count);
    return 0;
}