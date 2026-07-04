#include "board.h"
#include "player.h"
#include "referee.h"
#include <stdio.h>
#include <stdlib.h>


int main() {

    char* name1 = malloc(25* sizeof(char));
    char* name2 = malloc(25 * sizeof(char));
    char token1, token2;
    int id1, id2;

    // First player
    printf("Welcome to this ConnectFour board game.\n");
    printf("What's the name of the first player ? > ");
    scanf("%24s", name1);
    while (getchar() != '\n');
    printf("\n");
    printf("What's the token of the first player ? > ");
    scanf("%c", &token1);
    while (getchar() != '\n');
    printf("\n");
    do {
        printf("Is the player a human (1) or a robot (2) ? > ");
        int result = scanf("%d", &id1);
        if (result != 1) {
            while (getchar() != '\n');
            printf("The only 2 inputs accepted are 1 or 2. Pick one from them !\n");
        }
        printf("\n");
    } while (id1!= 1 && id1 != 2);

    Player* player1 = createPlayer(name1, token1, id1);

    // Second player
    printf("What's the name of the second player ? > ");
    scanf("%24s", name2);
    while (getchar() != '\n');
    printf("\n");
    do {
        printf("What's the token of the second player ? > ");
        scanf("%c", &token2);
        printf("\n");
        if (token1 == token2) {
            printf("Same tokens, player 2 has to change his token.\n");
        }
        while (getchar() != '\n');
    } while (token1 == token2);
    do {
        printf("Is the player a human (1) or a robot (2) ? > ");
        int result = scanf("%d", &id2);
        if (result != 1) {
            while (getchar() != '\n');
            printf("The only 2 inputs accepted are 1 or 2. Pick one from them !\n");
        }
        printf("\n");
    } while (id2 != 1 && id2 != 2);

    Player* player2 = createPlayer(name2, token2, id2);

    // Creation of the initial board
    token board[6][7];
    createInitialBoard(board);

    // GAME !
    printf("\n\nSTART OF THE GAME !\n\n");
    displayBoard(board, 6, 7);
    int shift = 0;
    int win = 0;
    int column;
    int columnPlayable;
    while (win == 0) {
        do {
            if (shift % 2 == 0) {
                column = playTokenColumn(player1, board);
            } else {
                column = playTokenColumn(player2, board);
            }
            columnPlayable = getLastRowPlayable(board, column);
            if (columnPlayable == -1) {
                printf("The column completly filled, you cannot play there ! Change your column choice !\n");
            }
        } while (columnPlayable == -1);
        if (shift % 2 == 0) {
            addToken(board, columnPlayable, column, player1);
            win = hasWon(player1, board);
        } else {
            addToken(board, columnPlayable, column, player2);
            win = hasWon(player2, board);
        }
        shift++;
        displayBoard(board, 6, 7);
    }

    freeMemory(player1);
    freeMemory(player2);
    free(name1);
    free(name2);
}