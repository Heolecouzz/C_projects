#include <assert.h>
#include "players.h"
#include "cards.h"
#include <stdio.h>

int main() {

    Player* player = createPlayer("ascendingStrategy");
    Card* card1 = createCard(1, 1);
    Card* card2 = createCard(2, 1);
    Card* card3 = createCard(3, 1);
    Card* card4 = createCard(4, 1);
    Card* card5 = createCard(5, 2);
    Card* card6 = createCard(6, 1);
    Card* card7 = createCard(7, 1);
    Card* card8 = createCard(8, 1);
    Card* card9 = createCard(9, 1);
    Card* card10 = createCard(10, 3);

    

    assert(getPlayerPoints(player) == 0);
    assert(getStrategy(player) == "ascendingStrategy");
    for (int k = 0; k < 10; k++) {
        assert(getPlayerCard(player, k) == NULL);
    }

    

    setPlayerCard(player, card2, 0);
    setPlayerCard(player, card5, 1);
    setPlayerCard(player, card8, 2);
    setPlayerCard(player, card10, 3);
    setPlayerCard(player, card1, 4);
    setPlayerCard(player, card3, 5);
    setPlayerCard(player, card6, 6);
    setPlayerCard(player, card7, 7);
    setPlayerCard(player, card9, 8);
    setPlayerCard(player, card4, 9);

    for (int k = 0; k < 10; k++) {
        assert(getPlayerCard(player, k) != NULL);
    }

    sortCards(player);

    for (int k = 0; k < 10; k++) {
        assert(getCardNumber(getPlayerCard(player, k)) == k+1);
    }

    setPlayerPoints(player, 55);
    assert(getPlayerPoints(player) == 55);

    freeCard(card1);
    freeCard(card2);
    freeCard(card3);
    freeCard(card4);
    freeCard(card5);
    freeCard(card6);
    freeCard(card7);
    freeCard(card8);
    freeCard(card9);
    freeCard(card10);

    freePlayer(player);

    return 0;
}