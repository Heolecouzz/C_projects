#include <stdio.h>

typedef struct Card Card;


typedef struct Player {
    char* strategy;
    int points;
    Card* heldCards;
} Player;