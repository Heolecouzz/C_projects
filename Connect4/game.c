#include "board.h"
#include "player.h"
#include "referee.h"
#include <stdio.h>


int main() {

    char* name;
    char token1, token2;
    int id;
    int result;

    // First player
    printf("Welcome to this ConnectFour board game.\n");
    printf("What's the name of the first player ? > ");
    scanf("%s", &name);
    while (getchar() != '\n');
    printf("\n");
    printf("What's the token of the first player ? > ");
    scanf("%c", &token1);
    while (getchar() != '\n');
    printf("\n");
    do {
        printf("Is the player a human (1) or a robot (2) ? > ");
        int result = scanf("%d", &id);
        if (result != 1) {
            while (getchar() != '\n');
            printf("The only 2 inputs accepted are 1 or 2. Pick one from them !\n");
        }
        printf("\n");
    } while (id != 1 && id != 2);

    Player* player1 = createPlayer(name, token1, id);

    // Second player
    printf("What's the name of the second player ? > ");
    scanf("%s", &name);
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
    id = 0;
    do {
        printf("Is the player a human (1) or a robot (2) ? > ");
        int result = scanf("%d", &id);
        if (result != 1) {
            while (getchar() != '\n');
            printf("The only 2 inputs accepted are 1 or 2. Pick one from them !\n");
        }
        printf("\n");
    } while (id != 1 && id != 2);

    Player* player2 = createPlayer(name, token2, id);

    freeMemory(player1);
    freeMemory(player2);
}