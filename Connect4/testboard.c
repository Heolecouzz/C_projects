#include "board.h"
#include "player.h"
#include <stdio.h>

int main() {

    token board[6][7];
    Player* myPlayer = createPlayer("James", 'X', 1);

    createInitialBoard(board, 6, 7);

    displayBoard(board, 6, 7);

    addToken(board, 6, 7, 2, 3, myPlayer);

    displayBoard(board, 6, 7);
}