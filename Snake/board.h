/* This module creates the board for the snake game */

#ifndef BOARD_H
#define BOARD_H

typedef enum Case {EDGE, APPLE, SNAKE, NONE} Case;

typedef struct Apple Apple;

typedef struct Snake Snake;


/* Creates the board for the game (15x17) */
void createBoard(Case board[17][19], Apple* apple, Snake* snake);


/* Display board */
void displayBoard(Case board[17][19], Apple* apple, Snake* Snake);


/* Set case */
void setCase(Case board[17][19], int row, int column, Case newType);


#endif