/* Players that plays the game */

#ifndef PLAYERS_H
#define PLAYERS_H

typedef struct Player Player;
typedef struct Card Card;

/* Play a card, thanks to its strategy, to a given lane */
int playCard(Player* player, int lane);

/* Getting the strategy of the player */
char* getStrategy(Player* player);

/* Set the cards for the half */
void setPlayerCard(Player* player, Card* card, int index);

/* Get the card at the given index */
Card* getPlayerCard(Player* player, int index);

/* Set the number of point a player has */
void setPlayerPoints(Player* player, int points);

/* Get the number of point a player has */
int getPlayerPoints(Player* player);

/* Add point of a lane to a player */
// void addPointsTo(Player* player, int points); 

/* Sort the cards the player has */
void sortCards(Player* player);

/* Create a player */
Player* createPlayer(char* strategy);

/* Free the memory allocated for a player */
void freePlayer(Player* player);

#endif