/* This module contains all the methods to verify if a move is legal, if a player has won etc...*/


typedef struct token {
    int player;
    char playerToken;
} token;

token board[6][7];

typedef struct Player Player;


/* Returns the last row where the player can play in a given column by the player. Returns -1 if the column is filled */
int getLastRowPlayable(token board[6][7], int colNumber);


/* Verify if the actual player has */
int hasWon(Player* player, token board[6][7]);