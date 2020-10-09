#include "function.h"

void printBoard(int board[SIZE_BOARD][SIZE_BOARD]) {

  int i, j;

  for (i = 0; i < SIZE_BOARD; i++) {

    for (j = 0; j < SIZE_BOARD; j++) {
      if (board[i][j] == 0)
        printf("    ");
      else
        printf("%4d", board[i][j]);
    }
    printf("\n\n");
  }
}