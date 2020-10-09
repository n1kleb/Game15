#include "function.h"

void game(int board[SIZE_BOARD][SIZE_BOARD]) {
  int index_r;
  int index_c;
  int temp;
  char code;
  for (int i = 0; i < SIZE_BOARD; i++)
    for (int j = 0; j < SIZE_BOARD; j++) {
      if (board[i][j] == 0) {
        index_r = i;
        index_c = j;
      }
    }
  while (true) {
    system("clear");
    printBoard(board);
    code = getchar();
    if (code == 'q')
      break;
    switch (code) {
    case 65:
    case 97:
      if (index_c > 0) {
        temp = board[index_r][index_c - 1];
        board[index_r][index_c - 1] = board[index_r][index_c];
        board[index_r][index_c] = temp;
        index_c--;
      }
      break;
    case 68:
    case 100:
      if (index_c < SIZE_BOARD - 1) {
        temp = board[index_r][index_c + 1];
        board[index_r][index_c + 1] = board[index_r][index_c];
        board[index_r][index_c] = temp;
        index_c++;
      }
      break;
    case 87:
    case 119:
      if (index_r > 0) {
        temp = board[index_r - 1][index_c];
        board[index_r - 1][index_c] = board[index_r][index_c];
        board[index_r][index_c] = temp;
        index_r--;
      }
      break;
    case 83:
    case 115:
      if (index_r < SIZE_BOARD - 1) {
        temp = board[index_r + 1][index_c];
        board[index_r + 1][index_c] = board[index_r][index_c];
        board[index_r][index_c] = temp;
        index_r++;
      }
    }
    if (winChecking(board)) {
      printf("\nYOU WIN!\n");
      break;
    }
  }
}