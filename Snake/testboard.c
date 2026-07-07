#include "board.h"
#include "apples.h"
#include "snake.h"
#include <stdio.h>

int main() {

    Case SnakeBoard[17][19];

    Apple* apple = initApple();
    Snake* snake = initializeSnake();

    createBoard(SnakeBoard, apple, snake);

    displayBoard(SnakeBoard, apple, snake);

    return 1;
}