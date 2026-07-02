/* This module lists all the methods of the board game */

#include "player.h"

#ifndef BOARD_H
#define BOARD_H

typedef struct token {
    int player;
    char playerToken;
} token;


/* This function display the board for the connect four (7x6) */
void displayBoard(token board[6][7], int rows, int columns);


/* Initialize the board with empty spaces */
void createInitialBoard(token board[6][7], int rows, int columns);


/* Add a token to the board game. */
void addToken(token board[6][7], int rows, int columns, int tokenRow, int tokenCol, Player player);


#endif