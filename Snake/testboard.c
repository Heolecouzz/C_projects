#include "board.h"
#include "apples.h"
#include "snake.h"
#include <stdio.h>

int main() {

    Case SnakeBoard[17][19];

    Apple* apple = initApple();
    Snake* snake = initializeSnake();

    createBoard(SnakeBoard, apple);

    displayBoard(SnakeBoard, snake);

    return 1;
}