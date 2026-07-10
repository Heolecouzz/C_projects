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

    createBoard(board, apple);

    displayBoard(board, snake);

    assert(hasWon(snake) == 0);
    assert(snakeInEdgeArea(snake) == 0);
    assert(SameLocation(snake, apple) == 0);

    while (!SameLocation(snake, apple)) {
        MoveSnake(board, snake, EAST);
        displayBoard(board, snake);
        assert(hasWon(snake) == 0);
        assert(snakeInEdgeArea(snake) == 0);
    }
    snakeBitApple(board, snake, apple);

    assert(getSnakeLength(snake) == 4);
    assert(getSnakePart(snake, 3) == QUEUE);
    assert(getSnakePart(snake, 2) == BODY);

    if (newDirectionAllowed(snake, NORTH)) {
        MoveSnake(board, snake, NORTH);
        displayBoard(board, snake);
    }
    MoveSnake(board, snake, WEST);
    displayBoard(board, snake);

    for (int i = 0; i < 5; i++) {
        MoveSnake(board, snake, WEST);
        displayBoard(board, snake);
    }

    MoveSnake(board, snake, SOUTH);
    displayBoard(board, snake);

    while (!snakeInEdgeArea(snake)) {
        MoveSnake(board, snake, SOUTH);
        displayBoard(board, snake);
    }

    freeApple(apple);
    freeSnake(snake);

    printf("ALL TESTS PASSED");
    return 1;
}