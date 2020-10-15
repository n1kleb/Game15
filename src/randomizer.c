#include "function.h"

void randomizer(int board[SIZE_BOARD][SIZE_BOARD]) 
{
    int i = 0, j = 0, k, tmp1, tmp2;
    int tmp;
    char t = 0;

    for (k = 0; k < SIZE_BOARD; ++k) {
        while (i < SIZE_BOARD) {
            j = 0;

            while (j < SIZE_BOARD) {
                while ((tmp1 = rand() % SIZE_BOARD)
                        == (tmp2 = rand() % SIZE_BOARD))
                    ;

                if (t) {
                    tmp = board[i][tmp1];
                    board[i][tmp1] = board[i][tmp2];
                    board[i][tmp2] = tmp;
                    t = !t;
                } else {
                    tmp = board[tmp1][j];
                    board[tmp1][j] = board[tmp2][j];
                    board[tmp2][j] = tmp;
                    t = !t;
                }
                ++j;
            }
            ++i;
            t = !t;
        }
    }
}