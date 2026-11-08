/* Allow to to interact with the board */

#ifndef BOARD_H
#define BOARD_H

typedef struct Card Card;

/* Returns the number of card on a given lane */
int getNbCardLane(int lane);

/* Returns the total points of the cards on a given lane */
int getPointLane(int lane);

/* Place a card on the board */
void placeCard(Card* card, int lane);

/* Create the initial board, full of NULL */
void createBoard();

/* Get the last card of a lane */
Card* getLastCardLane(int lane);

#endif