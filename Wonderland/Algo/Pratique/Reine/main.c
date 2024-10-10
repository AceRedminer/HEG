#include <stdlib.h>
#include <stdio.h>

enum tiles
{
    reine,
    move,
    none
};

void print_board(enum tiles tab[8][8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (tab[i][j])
            {
            case reine:
                printf("R ");
                break;
            case move:
                printf("* ");
                break;
            case none:
                printf("  ");
            default:
                break;
            }
        }
        printf("\n");
    }
}

void fill_board(enum tiles tab[8][8], int reine_x, int reine_y)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i == reine_x && j == reine_y)
            {
                tab[i][j] = reine;
            }
            else if (reine_x == i || reine_y == j || abs(reine_x - i) == abs(reine_y - j))
            {
                tab[i][j] = move;
            }
            else
            {
                tab[i][j] = none;
            }
        }
    }
}

int main()
{
    enum tiles tab[8][8];
    int reine_x, reine_y;
    printf("Enter the position where you want to place the queen (row and column): \n");
    scanf("%d %d", &reine_x, &reine_y);
    fill_board(tab, reine_x, reine_y);
    print_board(tab);
}
