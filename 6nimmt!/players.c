#include <stdio.h>
#include "Strategy.h"
#include "cards.h"
#include <stdlib.h>

typedef struct Player {
    Strategy* strategy;
    int points;
    Card* heldCards[10];
} Player;


int IndexCard(Player* player, int num) {
    int i = 0;
    while (getCardNumber(player->heldCards[i]) != num) {
        i++;
    }
    return i;
}


char* getStrategy(Player* player) {
    return getStrategyName(player->strategy);
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
        int minCardValue = getCardNumber(player->heldCards[i]);
        for (int w = i+1; w < 10; w++) {
            int testMinCardValue = getCardNumber(player->heldCards[w]);
            if (testMinCardValue < minCardValue) {
                minCardValue = testMinCardValue;
            }
        }
        int newMinCardIndex = IndexCard(player, minCardValue);
        Card* newMin;
        newMin = player->heldCards[newMinCardIndex];
        player->heldCards[newMinCardIndex] = player->heldCards[i];
        player->heldCards[i] = newMin;
    }
}


Card* getPlayerCard(Player* player, int index) {
    return player->heldCards[index];
}



Player* createPlayer(char* strategy) {
    Player* myPlayer = malloc(sizeof(Player));
    myPlayer->strategy = createStrategy(strategy);
    myPlayer->points = 0;
    for (int i = 0; i < 10; i++) {
        myPlayer->heldCards[i] = NULL;
    }
    return myPlayer;
}


void freePlayer(Player* player) {
    freeStrategy(player->strategy);
    free(player);
}


Strategy* playCard(Player* player) {
    char* stratName = getStrategyName(player->strategy);
    Strategy* strat;
    if (stratName == "ascendingStrategy") {
        strat = ascendingStrategy(player);
    } else if (stratName == "nearestStrategy") {
        strat = nearestStrategy(player);
    } else if (stratName == "minLaneStrategy") {
        strat = minLaneStrategy(player);
    } else {
        strat = minPointStrategy(player);
    }
    int index = IndexCard(player, getCardNumber(getStrategyCard(strat)));
    setPlayerCard(player, NULL, index);
    return strat;
}
