#include "referee.h"
#include "board.h"
#include "snake.h"
#include "apples.h"
#include <assert.h>
#include <stdio.h>

int main() {


    Apple* apple = initApple();

    Snake* snake = initializeSnake();

    Case board[17][19];

    createBoard(board, apple, snake);

    displayBoard(board, apple, snake);

    assert(hasWon(snake) == 0);
    assert(snakeInEdgeArea(snake) == 0);
    assert(SameLocation(snake, apple) == 0);

    while (!SameLocation(snake, apple)) {
        MoveSnake(board, snake, EAST);
        displayBoard(board, apple, snake);
    }
    snakeBitApple(board, snake, apple);

    assert(getSnakeLength(snake) == 4);
    assert(getSnakePart(snake, 3) == QUEUE);
    assert(getSnakePart(snake, 2) == BODY);

    MoveSnake(board, snake, NORTH);
    displayBoard(board, apple, snake);
    MoveSnake(board, snake, WEST);
    displayBoard(board, apple, snake);

    for (int i = 0; i < 5; i++) {
        MoveSnake(board, snake, WEST);
        displayBoard(board, apple, snake);
    }

    MoveSnake(board, snake, SOUTH);
    displayBoard(board, apple, snake);

    while (!snakeInEdgeArea(snake)) {
        MoveSnake(board, snake, SOUTH);
        displayBoard(board, apple, snake);
    }

    printf("ALL TESTS PASSED");
    return 1;
}