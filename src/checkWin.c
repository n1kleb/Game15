#include "function.h"

bool winChecking(int board[SIZE_BOARD][SIZE_BOARD]) {
  int sc = 1;
  for (int i = 0; i < SIZE_BOARD; i++)
    for (int j = 0; j < SIZE_BOARD; j++)
      if (board[i][j] != sc++)
        if (!(i == SIZE_BOARD - 1 && j == SIZE_BOARD - 1))
          return false;
  return true;
}