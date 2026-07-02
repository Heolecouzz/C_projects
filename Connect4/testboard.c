#include "board.h"

int main() {

    token board[6][7];

    createInitialBoard(board, 6, 7);

    displayBoard(board, 6, 7);
}