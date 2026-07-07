#include "snake.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct Snake {
    int Cordx;
    int Cordy;
    Directions direction;
    SnakePart snakeBlock;
    int allowcated;
} Snake;


Snake* initializeSnake() {

    Snake* snake = malloc(255 * sizeof(Snake));

    snake[0].snakeBlock = HEAD;
    snake[0].direction = EAST;
    snake[0].Cordy = 4;
    snake[0].Cordx = 8;
    snake[0].allowcated = 1;

    snake[1].snakeBlock = BODY;
    snake[1].direction = EAST;
    snake[1].Cordy = 3;
    snake[1].Cordx = 8;
    snake[1].allowcated = 1;

    snake[2].snakeBlock = QUEUE;
    snake[2].direction = EAST;
    snake[2].Cordy = 2;
    snake[2].Cordx = 8;
    snake[2].allowcated = 1;

    for (int j = 4; j < 255; j++) {
        snake[j].allowcated = 0;
    }

    return snake;
}


int getCoordx(Snake* snake, int index) {
    if (snake[index].allowcated) {
        return snake[index].Cordx;
    }
    return -1;
}


void setCoordx(Snake* snake, int index, int newCoord) {
    if (snake[index].allowcated) {
        snake[index].Cordx = newCoord;
    }
}


int getCoordy(Snake* snake, int index) {
    if (snake[index].allowcated) {
        return snake[index].Cordy;
    }
    return -1;
}


void setCoordy(Snake* snake, int index, int newCoord) {
    if (snake[index].allowcated) {
        snake[index].Cordy = newCoord;
    }
}


Directions getDirection(Snake* snake, int index) {
    if (snake[index].allowcated) {
        return snake[index].direction;
    }
    return -1;
}


void setDirection(Snake* snake, int index, Directions newDirection) {
    if (snake[index].allowcated) {
        snake[index].direction = newDirection;
    }
}


int isBody(Snake* snake, int index) {
    if (snake[index].allowcated) {
        if (snake[index].snakeBlock == BODY) {
            return 1;
        }
        return 0;
    }
    return -1;
}


void setSnakePart(Snake* snake, int index, SnakePart part) {
    if (snake[index].allowcated) {
        snake[index].snakeBlock = part;
    }
}


SnakePart getSnakePart(Snake* snake, int index) {
    if (snake[index].allowcated) {
        return snake[index].snakeBlock;
    }
    return -1;
}

int isHead(Snake* snake, int index) {
    if (snake[index].allowcated) {
        if (snake[index].snakeBlock == HEAD) {
            return 1;
        }
        return 0;
    }
    return -1;
}


int isQueue(Snake* snake, int index) {
    if (snake[index].allowcated) {
        if (snake[index].snakeBlock == QUEUE) {
            return 1;
        }
        return 0;
    }
    return -1;
}


int isAllowcated(Snake* snake, int index) {
    return snake[index].allowcated;
}


void setAllowcated(Snake* snake, int index) {
    snake[index].allowcated = 1;
}


int getSnakeLength(Snake* snake) {
    int length = 0;
    while (snake[length].allowcated) {
        length++;
        if (length == 254) {
            break;
        }
    }
    return length;
}


void displaySnakeHead() {
    printf("oo:  ");
}


void displaySnakeBody() {
    printf("ooooo");
}


void displaySnakeQueue() {
    printf("-oo");
}