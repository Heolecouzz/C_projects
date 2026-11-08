#include "Strategy.h"
#include "cards.h"
#include "player.h"
#include "board.h"
#include <stdio.h>

Card* ascendingStrategy(Player* player) {
    for (int i = 0; i < 10; i++) {
        Card* myCard;
        if (myCard = getPlayerCard(player, i) != NULL) {
            setPlayerCard(player, NULL, i);
            return myCard;
        }
    }
}

/* In this strategy, the player plays the card which are the nearest from another card on the board */
Card* nearestStrategy(Player* player);

/* In this strategy, the player plays in the lane with the less number of cards */
Card* minLaneStrategy(Player* player);

/* In this strategy, the player plays in the lane with the minimum of points */
Card* minPointStrategy(Player* player);