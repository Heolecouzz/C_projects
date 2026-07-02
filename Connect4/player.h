/* This module lists all the action that a player can do */

#ifndef PLAYER_H
#define PLAYER_H

typedef struct Player Player;


/* Return the name of the player given */
char* getPlayerName(Player* player);


/* Set the name of the player given */
void setPlayerName(Player* player, char* name);


/* Return the ID of the player given */
int getPlayerID(Player* player);


/* Set the ID of the player given */
void setPlayerID(Player* player, int ID);


/* Return the name of the player given */
char getPlayerToken(Player* player);


/* Set the token of the player given */
void setPlayerToken(Player* player, char token);


/* Create a player */
Player* createPlayer(char* name, char token, int id);


/* Free memory */
void freeMemory(Player* player);


#endif