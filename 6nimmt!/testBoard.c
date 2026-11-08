#include "board.h"
#include <assert.h>
#include "cards.h"
#include <stdio.h>

int main() {
    
    Card* card1 = createCard(1, 1);
    Card* card5 = createCard(5, 2);
    Card* card2 = createCard(2, 1);
    Card* card3 = createCard(3, 1);
    Card* card4 = createCard(4, 1);
    Card* card55 = createCard(55, 7);
    Card* card6 = createCard(6, 1);
    Card* card7 = createCard(7, 1);
    Card* card8 = createCard(8, 1);

    createBoard();

    assert(getNbCardLane(1) == 0);
    assert(getNbCardLane(2) == 0);
    assert(getNbCardLane(3) == 0);
    assert(getNbCardLane(4) == 0);

    assert(getLastCardLane(1) == NULL);
    assert(getLastCardLane(2) == NULL);
    assert(getLastCardLane(3) == NULL);
    assert(getLastCardLane(4) == NULL);

    placeCard(card1, 1);
    placeCard(card2, 2);
    placeCard(card3, 3);
    placeCard(card4, 4);

    assert(getNbCardLane(1) == 1);
    assert(getNbCardLane(2) == 1);
    assert(getNbCardLane(3) == 1);
    assert(getNbCardLane(4) == 1);

    assert(getPointLane(1) == 1);
    assert(getPointLane(2) == 1);
    assert(getPointLane(3) == 1);
    assert(getPointLane(4) == 1);

    assert(getCardNumber(getLastCardLane(1)) == 1);
    assert(getCardNumber(getLastCardLane(2)) == 2);
    assert(getCardNumber(getLastCardLane(3)) == 3);
    assert(getCardNumber(getLastCardLane(4)) == 4);

    placeCard(card55, 1);
    placeCard(card5, 1);

    assert(getNbCardLane(1) == 3);
    assert(getNbCardLane(2) == 1);
    assert(getNbCardLane(3) == 1);
    assert(getNbCardLane(4) == 1);

    assert(getPointLane(1) == 10);
    assert(getPointLane(2) == 1);
    assert(getPointLane(3) == 1);
    assert(getPointLane(4) == 1);

    assert(getCardNumber(getLastCardLane(1)) == 5);
    assert(getCardNumber(getLastCardLane(2)) == 2);
    assert(getCardNumber(getLastCardLane(3)) == 3);
    assert(getCardNumber(getLastCardLane(4)) == 4);

    placeCard(card6, 1);
    placeCard(card7, 1);

    assert(getNbCardLane(1) == 5);
    assert(getNbCardLane(2) == 1);
    assert(getNbCardLane(3) == 1);
    assert(getNbCardLane(4) == 1);

    assert(getPointLane(1) == 12);
    assert(getPointLane(2) == 1);
    assert(getPointLane(3) == 1);
    assert(getPointLane(4) == 1);

    assert(getCardNumber(getLastCardLane(1)) == 7);
    assert(getCardNumber(getLastCardLane(2)) == 2);
    assert(getCardNumber(getLastCardLane(3)) == 3);
    assert(getCardNumber(getLastCardLane(4)) == 4);

    placeCard(card8, 1);

    assert(getNbCardLane(1) == 1);
    assert(getNbCardLane(2) == 1);
    assert(getNbCardLane(3) == 1);
    assert(getNbCardLane(4) == 1);

    assert(getPointLane(1) == 1);
    assert(getPointLane(2) == 1);
    assert(getPointLane(3) == 1);
    assert(getPointLane(4) == 1);

    assert(getCardNumber(getLastCardLane(1)) == 8);
    assert(getCardNumber(getLastCardLane(2)) == 2);
    assert(getCardNumber(getLastCardLane(3)) == 3);
    assert(getCardNumber(getLastCardLane(4)) == 4);

    freeCard(card1);
    freeCard(card2);
    freeCard(card3);
    freeCard(card4);
    freeCard(card5);
    freeCard(card6);
    freeCard(card7);
    freeCard(card8);
    freeCard(card55);
}