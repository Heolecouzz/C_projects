/* Tthe module handles everything about the snake. The snake is an array of 255 blocks. */

#ifndef SNAKE_H
#define SNAKE_H


typedef struct Snake Snake;

typedef enum Directions {NORTH, SOUTH, EAST, WEST} Directions;
typedef enum SnakePart {HEAD, BODY, QUEUE} SnakePart;

/* Initializes a snake */
Snake* initializeSnake();


/* Get the coordonate x of the snake at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet. */
int getCoordx(Snake* snake, int index);


/* Set the coordonate x of the snake at the index given */
void setCoordx(Snake* snake, int index, int newCoord);


/* Get the coordonate y of the snake at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet. */
int getCoordy(Snake* snake, int index);


/* Set the coordonate y of the snake at the index given */
void setCoordy(Snake* snake, int index, int newCoord);


/* Get the direction of the snake at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet. */
Directions getDirection(Snake* snake, int index);


/* Set the coordonate y of the snake at the index given */
void setDirection(Snake* snake, int index, Directions newDirection);


/* Returns 1 if that block of the snake is part of its body, 0 otherwise at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet. */
int isBody(Snake* snake, int index);


/* Set the a block of the snake, given by the index, to the part (HEAD, BODY, QUEUE) given */
void setSnakePart(Snake* snake, int index, SnakePart part);


/* Get the part of the snake at the given index*/
SnakePart getSnakePart(Snake* snake, int index);


/* Returns 1 if that block of the snake is the head, 0 otherwise at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet.*/
int isHead(Snake* snake, int index);


/* Returns 1 if that block of the snake is its queue, 0 otherwise at the index given. Returns -1 if the index doesn't correspond to any block allowcated to the snake yet. */
int isQueue(Snake* snake, int index);


/* Returns 1 if that block of the snake is allowcated, 0 otherwise at the index given */
int isAllowcated(Snake* snake, int index);


/* Set the allowcated field to 1, for a block of the snake, given by its index */
void setAllowcated(Snake* snake, int index);


/* Get the length of the snake */
int getSnakeLength(Snake* snake);


/* Display the head of the snake */
void displaySnakeHead(Snake* snake, Directions direction);


/* Display the body of the snake */
void displaySnakeBody(Snake* snake, Directions direction);


/* Display the queue of the snake */
void displaySnakeQueue(Snake* snake, Directions direction);


/* The user gives the row and the column and returns corresponding to the coordonates. Returns -1 if it doesn't exist */
int boardToSnakeIndex(Snake* snake, int coordx, int coordy);

#endif