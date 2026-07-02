#include "player.h"
#include "board.h"


int getLastRowPlayable(token board[6][7], int colNumber) {

    for (int i = 5; i >= 0; i--) {
        if (board[i][colNumber].playerToken == ' ') {
            return i;
        }
    }
    return -1;
}


int hasWon(Player* player, token board[6][7]) {

    // Verification of 4 same tokens in a row horizontally

    // Verification of 4 same tokens in a row vertically

    // Verification of 4 same tokens in a row diagonally
}