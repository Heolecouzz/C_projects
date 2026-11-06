#include <stdio.h>
#include "cards.h"

int main() {

    Card* pile[104];

    for (int i = 1; i <= 104; i++) {
        int points;
        if (i % 10 == 0) {
            points = 3;
        }else if (i == 55) {
            points = 7;
        } else if (i % 5 == 0) {
            points = 2;
        } else if (i == 11 || i == 22 || i == 33 || i == 44 || i == 66 || i == 77 || i == 88 || i == 99) {
            points = 5;
        } else {
            points = 1;
        }

        printf("i = %d\n", i);
        pile[i-1] = createCard(i, points);

        printf("The card %d cost %d points\n", getCardNumber(pile[i -1]), getCardPoints(pile[i -1]));
    }

    for (int i = 0; i < 104; i++) {
        freeCard(pile[i]);
    } 
}