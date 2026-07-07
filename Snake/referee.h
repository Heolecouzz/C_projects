/* This module refers to the rules of the snake game */

#ifndef REFEREE_H
#define REFEREE_H

typedef struct Snake Snake;
typedef struct Apple Apple;

/* Returns 1 if the player has won */
int hasWon(Snake* snake);


/* Returns -1 if the snake goes into the edge of the board */
int snakeInEdgeArea(Snake* snake);


/* Return 1 if the snake and the apple have the same location, 0 otherwise */
int SameLocation(Snake* snake, Apple* apple);


/* Create the whole process to get a new apple location and get the snake to grow */
void snakeBiteApple(Snake* snake, Apple* apple);


#endif