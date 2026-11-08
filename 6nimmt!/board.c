#include "board.h"
#include <stdio.h>
#include "cards.h"

static Card* board[4][5];


int getNbCardLane(int lane) {
    int length = 0;
    for (int k = 0; k < 5; k++) {
        if (board[lane - 1][k] != NULL) {
            length++;
        } else {
            return length;
        }
    }
    return length;
}


int getPointLane(int lane) {
    int length = getNbCardLane(lane);
    int points = 0;
    for (int i = 0; i < length; i++) {
        points += getCardPoints(board[lane - 1][i]);
    }
    return points;
}


void placeCard(Card* card, int lane) {
    int length = getNbCardLane(lane);
    if (length == 5) {
        for (int i = 0; i < 5; i++) {
            board[lane - 1][i] = NULL;
        }
        board[lane - 1][0] = card;
    } else {
        board[lane - 1][length] = card;
    }
}


void createBoard() {
    for (int i = 0; i < 4; i++) {
        for (int w = 0; w < 5; w++) {
            board[i][w] = NULL;
        }
    }
}


Card* getLastCardLane(int lane) {
    int length = getNbCardLane(lane);
    if (length == 0) {
        return NULL;
    }
    return board[lane - 1][length - 1];
}