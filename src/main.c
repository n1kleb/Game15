#include "function.h"

int main() {

    int board[SIZE_BOARD][SIZE_BOARD] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9,  10, 11, 12 },
        { 13, 14, 15, 0 }
    };
    srand(time(NULL));
    randomizer(board);
    game(board);
    return 0;
}
