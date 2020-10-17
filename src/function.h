#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE_BOARD 4

void randomizer(int board[SIZE_BOARD][SIZE_BOARD]);
void printBoard(int board[SIZE_BOARD][SIZE_BOARD]);
void game(int board[SIZE_BOARD][SIZE_BOARD]);
bool checkWin(int board[SIZE_BOARD][SIZE_BOARD]);

#endif