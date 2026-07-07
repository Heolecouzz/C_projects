#include "apples.h"
#include "snake.h"


int hasWon(Snake* snake) {
    if (isAllowcated(snake, 254)) {
        return 1;
    }
    return 0;
}


int snakeInEdgeArea(Snake* snake) {
    for (int index = 0; index < getSnakeLength(snake); index++) {
        if (getCoordx(snake, index) == 0 || getCoordx(snake, index) == 18) {
            return 1;
        }
        if (getCoordy(snake, index) == 0 || getCoordy(snake, index) == 16) {
            return 1;
        }
    }
    return 0;
}


int SameLocation(Snake* snake, Apple* apple) {
    for (int index = 0; index < getSnakeLength(snake); index++) {
        if (getCoordx(snake, index) == getCordxApple(apple) && getCoordy(snake, index) == getCordyApple(apple)) {
            return 1;
        }
    }
    return 0;
}


void snakeBiteApple(Snake* snake, Apple* apple);