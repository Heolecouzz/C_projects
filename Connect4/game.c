#include "board.h"
#include "player.h"
#include "referee.h"
#include <stdio.h>


int main() {

    char* name;
    char token;
    int id;

    printf("Welcome to this ConnectFour board game.\n");
    printf("What's the name of the first player ? > ");
    scanf("%s", &name);
    printf("\n");
    printf("What's the token of the first player ? > ");
    scanf("%s", &token);
    printf("\n");
    do {
        printf("Is the player a human (1) or a robot (2) ? > ");
        int result = scanf("%d", &id);
        if (result != 1) {
            while (getchar() != '\n');
        }
        printf("\n");
    } while (id != 1 && id != 2);
    

    Player* player1 = createPlayer(name, token, id);

    freeMemory(player1);
}