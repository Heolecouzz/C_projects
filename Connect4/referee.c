#include "player.h"
#include "board.h"
#include <stdio.h>


int getLastRowPlayable(token board[6][7], int colNumber) {

    for (int i = 0; i < 6; i++) {
        if (board[i][colNumber].playerToken == ' ') {
            return i;
        }
    }
    return -1;
}


int hasWon(Player* player, token board[6][7]) {

    char tokenplayer = getPlayerToken(player);

    // Verification of 4 same tokens in a row horizontally
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j].playerToken == tokenplayer && board[i][j + 1].playerToken == tokenplayer && board[i][j + 2].playerToken == tokenplayer && board[i][j + 3].playerToken == tokenplayer) {
                printf("The player %s just won ! Congratulations !\n\n", getPlayerName(player));
                return 1;
            }
        }
    }

    // Verification of 4 same tokens in a row vertically
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            if (board[i][j].playerToken == tokenplayer && board[i + 1][j].playerToken == tokenplayer && board[i + 2][j].playerToken == tokenplayer && board[i + 3][j].playerToken == tokenplayer) {
                printf("The player %s just won ! Congratulations !\n\n", getPlayerName(player));
                return 1;
            }
        }
    }

    // Verification of 4 same tokens in a row diagonally
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (board[i][j].playerToken == tokenplayer && board[i + 1][j + 1].playerToken == tokenplayer && board[i + 2][j + 2].playerToken == tokenplayer && board[i + 3][j + 3].playerToken == tokenplayer) {
                printf("The player %s just won ! Congratulations !\n\n", getPlayerName(player));
                return 1;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 6; j >= 3; j--) {
            if (board[i][j].playerToken == tokenplayer && board[i + 1][j - 1].playerToken == tokenplayer && board[i + 2][j - 2].playerToken == tokenplayer && board[i + 3][j - 3].playerToken == tokenplayer) {
                printf("The player %s just won ! Congratulations !\n\n", getPlayerName(player));
                return 1;
            }
        }
    }

    return 0;
}