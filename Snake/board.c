#include "board.h"
#include <stdio.h>



void createBoard(Case board[17][19]) {

    for (int j = 0; j < 19; j++) {
        board[0][j].isEdge = 1;
        board[16][j].isEdge = 1;
    }

    for (int i = 0; i < 17; i++) {
        board[i][0].isEdge = 1;
        board[i][18].isEdge = 1;
    }

    for (int i = 1; i < 16; i++) {
        for (int j = 1; j < 18; j++) {
            board[i][j].isEdge = 0;
        }
    }
}

void displayBoard(Case board[17][19]) {

    for (int i = 17 - 1; i >= 0; i--) {
        printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
        for (int j = 0; j < 19; j++) {
            if (board[i][j].isEdge == 1) {
                printf("| XXX ");
            } else {
                printf("|     ");
            }
        }
        printf("|\n");
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
}