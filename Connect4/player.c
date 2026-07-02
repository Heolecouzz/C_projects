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

    if (ID != 1 || ID != 2) {
        printf("The ID given to the player must be either 1 or 2");
    }
    player->numPlayer = ID;
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