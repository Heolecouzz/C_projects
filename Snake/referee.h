/* This module refers to the rules of the snake game */

#ifndef REFEREE_H
#define REFEREE_H

typedef struct Snake Snake;
typedef struct Apple Apple;
typedef enum Case {EDGE, APPLE, SNAKE, NONE} Case;
typedef enum Directions {NORTH, SOUTH, EAST, WEST} Directions;

/* Returns 1 if the player has won, 0 otherwise */
int hasWon(Snake* snake);


/* Returns 1 if the snake goes into the edge of the board, 0 otherwise */
int snakeInEdgeArea(Snake* snake);


/* Return 1 if the snake and the apple have the same location, 0 otherwise */
int SameLocation(Snake* snake, Apple* apple);


/* Create the whole process to get a new apple location and get the snake to grow */
void snakeBitApple(Case board[17][19], Snake* snake, Apple* apple);


/* Move the snake */
void MoveSnake(Case board[17][19], Snake* snake, Directions newDirection);


/* Verify if the new direction can be done */
int newDirectionAllowed(Snake* snake, Directions newDirection);


#endif