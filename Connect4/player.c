#include "player.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct Player {
    char* name;
    char token;
    int numPlayer;
} Player;


char* getPlayerName(Player* player) {
    return player->name;
}


void setPlayerName(Player* player, char* name) {
    player->name = name;
}


int getPlayerID(Player* player) {
    return player->numPlayer;
}


void setPlayerID(Player* player, int ID) {

    if (ID == 1 || ID == 2) {
        player->numPlayer = ID;
    } else {
        printf("The ID given to the player must be either 1 or 2\n\n");
    }
    
}


char getPlayerToken(Player* player) {
    return player->token;
}


void setPlayerToken(Player* player, char token) {
    player->token = token;
}


Player* createPlayer(char* name, char token, int id) {

    Player* player = malloc(sizeof(Player));

    player->name = name;
    player->numPlayer = id;
    player->token = token;

    return player;
}


void freeMemory(Player* player) {
    free(player);
} 


int playTokenColumn(Player* player) {

    int column;
    // Human players
    if (player->numPlayer == 1) {
        do {
            printf("%s, in which column do you want to play ? > ", player->name);
            int result = scanf("%d", &column);
            printf("\n");
            if (result != 1) {
                while(getchar() != '\n');
            }
            if (column != 1 && column != 2 && column != 3 && column != 4 && column != 5 && column != 6 && column != 7) {
                printf("The number given must be between 1 and 7 included !\n");
            }
        } while (column != 1 && column != 2 && column != 3 && column != 4 && column != 5 && column != 6 && column != 7);
        return column - 1;
    }
} // Bot players (TODO)