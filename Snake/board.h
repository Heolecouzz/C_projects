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


/* Set the hasSnake field to 0 or 1 */
void setHasSnake(Case board[17][19], int row, int column, int number);


/* Set the hasApple to 0 or 1 */
void setHasSnake(Case board[17][19], int row, int column, int number);


#endif