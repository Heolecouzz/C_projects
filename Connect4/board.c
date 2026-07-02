#include "board.h"
#include <stdio.h>
#include "player.h"

token board[6][7];


void displayBoard(token board[6][7], int rows, int columns) {

    for (int i = rows - 1; i >= 0; i--) {
        printf("____________________________\n");
        for (int j = 0; j < columns; j++) {
            printf("| %c ", board[i][j].playerToken);
        }
        printf("| %d\n", i+1);
    }
    printf("____________________________\n");
    for (int i = 0; i < 7; i++) {
        printf("  %d ", i+1);
    }
    printf("\n");
}

void createInitialBoard(token board[6][7], int rows, int columns) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7; j++) {
            board[i][j].playerToken = ' ';
            board[i][j].player = 0;
        }
    }
}


void addToken(token board[6][7], int rows, int columns, int tokenRow, int tokenCol, Player* player) {
    board[tokenRow - 1][tokenCol - 1].playerToken = getPlayerToken(player);
    board[tokenRow - 1][tokenCol - 1].player = getPlayerID(player);
}