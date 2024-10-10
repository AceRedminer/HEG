#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef enum
{
    BOMB = 'B',
    FLAG = 'F',
    EMPTY = ' '
} square_t;

typedef enum
{
    OPEN,
    CLOSE
} state_t;

void print_debug(int L, int C, square_t board[L][C], int board_val[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            switch (board[i][j])
            {
            case BOMB:
                printf("| %c ", 'B');
                break;
            default:
                printf("| %d ", board_val[i][j]);
                break;
            }
        }
        printf("|\n");
    }
}

void print_board(int L, int C, square_t board[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            switch (board[i][j])
            {
            case BOMB:
                printf("| %c ", 'B');
                break;
            default:
                printf("|   ");
                break;
            }
        }
        printf("|\n");
    }
}

void print_board_game(int L, int C, square_t board[L][C], int board_val[L][C], state_t board_state[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            switch (board[i][j])
            {
            case FLAG:
                printf("| %c ", 'F');
                break;
            default:
                board_state[i][j] == OPEN ? printf("| %d ", board_val[i][j]) : printf("|   ");
                break;
            }
        }
        printf("|\n");
    }
}

void increment_board_val(int l, int c, int L, int C, int board_val[L][C])
{
    if (l < L && c < C && l >= 0 && c >= 0)
    {
        board_val[l][c] += 1;
    }
}

void init_boards(int L, int C, int M, square_t board[L][C], int board_val[L][C])
{
    int count_bombs = 0;
    while (count_bombs != M)
    {
        for (int i = 0; i < L; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (count_bombs < M && (rand() % 100) % 8 == 0 && board[i][j] != BOMB)
                {
                    board[i][j] = BOMB;
                    increment_board_val(i + 1, j, L, C, board_val);
                    increment_board_val(i + 1, j + 1, L, C, board_val);
                    increment_board_val(i + 1, j - 1, L, C, board_val);
                    increment_board_val(i - 1, j, L, C, board_val);
                    increment_board_val(i - 1, j + 1, L, C, board_val);
                    increment_board_val(i - 1, j - 1, L, C, board_val);
                    increment_board_val(i, j + 1, L, C, board_val);
                    increment_board_val(i, j - 1, L, C, board_val);
                    count_bombs++;
                }
                else if (board[i][j] != BOMB)
                {
                    board[i][j] = EMPTY;
                }
            }
        }
    }
}

void set_zero(int L, int C, int board_val[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            board_val[i][j] = 0;
        }
    }
}

void set_close(int L, int C, state_t board_state[L][C])
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            board_state[i][j] = CLOSE;
        }
    }
}

int open_square(int l, int c, int L, int C, square_t board[L][C], int board_val[L][C], state_t board_state[L][C])
{
    if (l >= L || c >= C || l < 0 || c < 0 || board_state[l][c] == OPEN)
    {
        return -1;
    }
    else
    {
        board_state[l][c] = OPEN;
        switch (board[l][c])
        {
        case BOMB:
            return 1;
            break;
        case FLAG:
            return 2;
            break;
        case EMPTY:
            if (board_val[l][c] == 0)
            {
                open_square(l + 1, c, L, C, board, board_val, board_state);
                open_square(l + 1, c + 1, L, C, board, board_val, board_state);
                open_square(l + 1, c - 1, L, C, board, board_val, board_state);
                open_square(l - 1, c, L, C, board, board_val, board_state);
                open_square(l - 1, c + 1, L, C, board, board_val, board_state);
                open_square(l - 1, c - 1, L, C, board, board_val, board_state);
                open_square(l, c + 1, L, C, board, board_val, board_state);
                open_square(l, c - 1, L, C, board, board_val, board_state);
                return 4;
            }
            else
            {
                return 3;
            }
            break;
        default:
            break;
        }
    }
}

void play(int L, int C, int M, square_t board[L][C], int board_val[L][C], state_t board_state[L][C])
{
    int count_flag = 0;
    int count_open = 0;
    int dead = 0;
    while (dead != 1 || count_open == ((L * C) - M) || (count_flag == M && count_open == ((L * C) - M)))
    {
        print_board_game(L, C, board, board_val, board_state);
        printf("Choisissez l'action a effectuer (D ou O) : ");
        char action;
        scanf(" %c", &action);
        printf("Choisissez a quel position l'effectuer : \n");
        int l, c;
        printf("L : ");
        scanf(" %d", &l);
        printf("C : ");
        scanf(" %d", &c);

        if (action == 'D')
        {
            board[l][c] = FLAG;
            count_flag++;
        }
        else if (action == 'O')
        {
            if (board_state[l][c] == CLOSE)
            {
                dead = open_square(l, c, L, C, board, board_val, board_state);
                count_open++;
            }
            else
            {
                continue;
            }
        }
    }
    printf("BOOOOOM !!! \n");
    print_board(L, C, board);
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        return 1;
    }
    int L = atoi(argv[1]);
    int C = atoi(argv[2]);
    int M = atoi(argv[3]);
    srand(time(NULL));
    square_t board[L][C];
    int board_val[L][C];
    set_zero(L, C, board_val);
    init_boards(L, C, M, board, board_val);
    printf("\n");
    state_t board_state[L][C];
    set_close(L, C, board_state);
    print_debug(L, C, board, board_val);
    play(L, C, M, board, board_val, board_state);

    return 0;
}
