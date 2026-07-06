#include "snake.h"

typedef enum Diretions {NORTH, SOUTH, EAST, WEST} Directions;

typedef struct Snake {
    int headCordx;
    int headCordy;
    Directions direction;
    int ChangeCordx[100];
    int ChangeCordy[100];
} Snake;