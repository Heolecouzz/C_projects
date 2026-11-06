#include <stdio.h>
#include <stdlib.h>

typedef struct Card {
    int number;
    int points;
} Card;

/* Returns the card number */
int getCardNumber(Card* card) {
    return card->number;
}

/* Returns the points of the card */
int getCardPoints(Card* card) {
    return card->points;
}

/* Creates one card */
Card* createCard(int number, int points) {
    Card* myCard = malloc(sizeof(Card));
    myCard->number = number;
    myCard->points = points;
    return myCard;
}

/* Free the memory space allocated for cards */
void freeCard(Card* card) {
    free(card);
}