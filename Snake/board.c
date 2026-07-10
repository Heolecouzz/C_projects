#include "board.h"
#include <stdio.h>
#include "snake.h"
#include "apples.h"



void createBoard(Case board[17][19], Apple* apple, Snake* snake) {

    // Create edges
    for (int j = 0; j < 19; j++) {
        board[0][j] = EDGE;
        board[16][j] = EDGE;
    }

    for (int i = 0; i < 17; i++) {
        board[i][0] = EDGE;
        board[i][18]= EDGE;
    }

    for (int i = 1; i < 16; i++) {
        for (int j = 1; j < 18; j++) {
            board[i][j] = NONE;
        }
    }

    // Place the first Apple
    board[getCoordyApple(apple)][getCoordxApple(apple)] = APPLE;
    // Place the snake at the beginning
    for (int i = 2; i < 5; i++) {
        board[8][i] = SNAKE;
    }
}

void displayBoard(Case board[17][19], Apple* apple, Snake* snake) {

    printf("\033[H]\n\n");

    for (int i = 1; i < 16; i++) {
        printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
        for (int j = 1; j < 18; j++) {
            if (board[i][j] == EDGE) {
                printf("| XXX ");
            } else if (board[i][j] == SNAKE) {
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
            } else if (board[i][j] == APPLE) {
                printf("|  \033[1;32mA\033[0m  ");
            } else {
                printf("|     ");
            }
        }
        printf("|\n");
    }
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
}


void setCase(Case board[17][19], int row, int column, Case newType) {
    board[row][column] = newType;
}