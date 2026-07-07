#include "board.h"
#include <stdio.h>
#include "snake.h"
#include "apples.h"



void createBoard(Case board[17][19], Apple* apple, Snake* snake) {

    // Create edges
    for (int j = 0; j < 19; j++) {
        board[0][j].isEdge = 1;
        board[16][j].isEdge = 1;
    }

    for (int i = 0; i < 17; i++) {
        board[i][0].isEdge = 1;
        board[i][18].isEdge = 1;
    }

    for (int i = 1; i < 16; i++) {
        for (int j = 1; j < 18; j++) {
            board[i][j].isEdge = 0;
            board[i][j].hasApple = 0;
            board[i][j].hasSnake = 0;
        }
    }

    // Place the first Apple
    board[getCordyApple(apple)][getCordxApple(apple)].hasApple = 1;
    // Place the snake at the beginning
    for (int i = 2; i < 5; i++) {
        board[8][i].hasSnake = 1;
    }
}

void displayBoard(Case board[17][19], Apple* apple, Snake* snake) {

    for (int i = 15; i > 0; i--) {
        printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
        for (int j = 1; j < 18; j++) {
            if (board[i][j].isEdge == 1) {
                printf("| XXX ");
            } else if (board[i][j].hasSnake == 1) {
                int index = boardToSnakeIndex(snake, j, i);
                SnakePart part = getSnakePart(snake, index);
                Directions direction = getDirection(snake, index);
                printf("|");
                if (part == HEAD) {
                    displaySnakeHead(snake, direction);
                } else if (part == BODY) {
                    displaySnakeBody(snake, direction);
                } else {
                    displaySnakeQueue(snake, direction);
                }
            } else if (board[i][j].hasApple == 1) {
                printf("|  A  ");
            } else {
                printf("|     ");
            }
        }
        printf("|\n");
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
}


void setHasSnake(Case board[17][19], int row, int column, int number) {
    if (number != 1 && number != 0) {
        board[row][column].hasSnake = number;
    }
}


void setHasSnake(Case board[17][19], int row, int column, int number) {
    if (number != 1 && number != 0) {
        board[row][column].hasApple = number;
    }
}