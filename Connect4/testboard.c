#include "board.h"

int main() {

    token board[6][7];
    Player player;

    player.name = "James";
    player.numPlayer = 1;
    player.token = 'X';

    createInitialBoard(board, 6, 7);

    displayBoard(board, 6, 7);

    addToken(board, 6, 7, 2, 3, player);

    displayBoard(board, 6, 7);
}