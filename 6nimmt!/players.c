#include <stdio.h>
#include "Strategy.h"

typedef struct Card Card;

typedef struct Player {
    char* strategy;
    int points;
    Card* heldCards[10];
} Player;


int playCard(Player* player, int lane) {
    if (player->strategy == "ascendingStrategy") {
        ascendingStrategy(player);
    } else if (player->strategy == "nearestStrategy") {
        nearestStrategy(player);
    } else if (player->strategy == "minLaneStrategy") {
        minLaneStrategy(player);
    } else {
        minPointStrategy(player);
    }
}


void setStrategy(Player* player, char* strategy) {
    player->strategy = strategy;
}


void setPlayerCard(Player* player, Card* card, int index) {
    player->heldCards[index] = card;
}


void setPlayerPoints(Player* player, int points) {
    player->points = points;
}


int getPlayerPoints(Player* player) {
    return player->points;
}


void addPointsTo(Player* player, int points) {
    player->points += points;
}


void sortCards(Player* player) {
    for (int i = 0; i < 10; i++) {
        int indexMax = getCardNu 
    }
}


Card* getPlayerCard(Player* player, int index) {
    return player->heldCards[index];
}