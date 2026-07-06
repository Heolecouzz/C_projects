#include "board.h"
#include <stdio.h>

int main() {

    Case SnakeBoard[17][19];

    createBoard(SnakeBoard);

    displayBoard(SnakeBoard);

    return 1;
}