#include "snake.h"
#include <stdio.h>
#include <assert.h>

int main() {

    Snake* snake = initializeSnake();

    assert(getCoordx(snake, 0) == 4);
    assert(getCoordy(snake, 0) == 8);
    assert(getCoordx(snake, 1) == 3);
    assert(getCoordy(snake, 1) == 8);
    assert(getCoordx(snake, 2) == 2);
    assert(getCoordy(snake, 2) == 8);
    assert(getSnakeLength(snake) == 3);
    assert(getDirection(snake, 0) == EAST);
    assert(isBody(snake, 13) == -1);
    assert(isHead(snake, 13) == -1);
    assert(isQueue(snake, 13) == -1);
    assert(isBody(snake, 0) == 0);
    assert(isHead(snake, 0) == 1);
    assert(isQueue(snake, 0) == 0);
    assert(isBody(snake, 1) == 1);
    assert(isHead(snake, 1) == 0);
    assert(isQueue(snake, 1) == 0);
    assert(isBody(snake, 2) == 0);
    assert(isHead(snake, 2) == 0);
    assert(isQueue(snake, 2) == 1);
    assert(isAllowcated(snake, 1) == 1);
    assert(isAllowcated(snake, 4) == 0);

    setAllowcated(snake, 3);
    assert(isAllowcated(snake, 3) == 1);
    setSnakePart(snake, 3, QUEUE);
    setSnakePart(snake, 2, BODY);
    setCoordx(snake, 3, 12);
    setCoordy(snake, 3, 12);
    setDirection(snake, 3, NORTH);

    assert(isBody(snake, 2) == 1);
    assert(isQueue(snake, 2) == 0);
    assert(isBody(snake, 3) == 0);
    assert(isQueue(snake, 3) == 1);
    assert(getDirection(snake, 3) == NORTH);

    displaySnakeBody();
    printf("\n");
    displaySnakeHead();
    printf("\n");
    displaySnakeQueue();
    printf("\n");


    printf("ALL TESTS PASSED");
    return 1;
}