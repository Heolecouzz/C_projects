/* This module creates the board for the snake game */

#ifndef BOARD_H
#define BOARD_H

typedef struct Case {
    int isEdge;
    int hasSnake;
    int hasApple;
} Case;

typedef struct Apple Apple;

typedef struct Snake Snake;


/* Creates the board for the game (15x17) */
void createBoard(Case board[17][19], Apple* apple, Snake* snake);


/* Display board */
void displayBoard(Case board[17][19], Apple* apple, Snake* Snake);


#endif