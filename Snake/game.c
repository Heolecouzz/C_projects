/* The game of snake ! */

#include "board.h"
#include "snake.h"
#include "referee.h"
#include "apples.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

// Variables to store the initial state of the terminal 
struct termios original_termios;
int original_fcntl;


void restore_terminal() {
    tcsetattr(STDIN_FILENO, TCSANOW, &original_termios); // Restore the initial structure of the termios
    fcntl(STDIN_FILENO, F_SETFL, original_fcntl); // Pull out the flag O_NONBLOCK and restore the initial flags
}


void setup_terminal() {
    tcgetattr(STDIN_FILENO, &original_termios); // Copy the initial configuration in the global variable
    original_fcntl = fcntl(STDIN_FILENO, F_GETFL); // Save the I/O flags 
    atexit(restore_terminal); // Whatever happens, before quitting the program, start the restore_terminal function

    // Modifications
    struct termios t = original_termios; // We start by the initial configuration
    t.c_lflag &= ~(ICANON | ECHO); // We supress the need to punch enter and the display of the caracters
    tcsetattr(STDIN_FILENO, TCSANOW, &t); // Apply the modifications
    fcntl(STDIN_FILENO, F_SETFL, original_fcntl | O_NONBLOCK); // Add of the O_NONBLOCK flag
}


Directions NewDirection(Snake* snake, Directions formerDirection) {

    int echap;
    Directions newDirection;
    Directions directionKept = formerDirection;

    while ((echap = getchar()) != EOF) {
        if (echap == 27) {
            char letter;
            if (getchar() == '[') {
                letter = getchar();
                switch (letter) {
                    case 'A' : 
                        newDirection = NORTH;
                        break; 
                    case 'B' :
                        newDirection = SOUTH;
                        break;
                    case 'C' :
                        newDirection = EAST;
                        break;
                    case 'D' :
                        newDirection = WEST;
                        break;
                    default :
                        newDirection = formerDirection;
                        break;
                }
                if (newDirectionAllowed(snake, newDirection)) {
                    directionKept = newDirection;
                } else {
                    directionKept = formerDirection;
                }
            }
        }
    }

    return directionKept;
}

int main() {

    Case board[17][19];

    Apple* apple = initApple();

    Snake* snake = initializeSnake();

    createBoard(board, apple, snake);

    int choice, usleepChoice;
    printf("Welcome to snake ! Your aim is to eat apples to grow !\n\n");

    do {
        printf("In which difficulty whould you want to play : Easy (1) / Medium (2) / Difficult (3) / Hardcore (4) > ");
        scanf("%d", &choice);
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
            printf("\nThe only choices are : Easy (1) / Medium (2) / Difficult (3) / Hardcore (4) > ");
        }
    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);

    switch (choice) {
        case 1 :
            usleepChoice = 1000000;
            break;
        case 2 :
            usleepChoice = 500000;
            break;
        case 3 :
            usleepChoice = 250000;
            break;
        case 4 :
            usleepChoice = 100000;
            break;
    }

    setup_terminal();

    system("clear");

    displayBoard(board, apple, snake);

    while(!hasWon(snake) && !snakeInEdgeArea(snake) && !snakeCollisionSnake(snake)) {

        Directions direction = getDirection(snake, 0);
        direction = NewDirection(snake, direction);
        MoveSnake(board, snake, direction);

        // Verifications
        if (SameLocation(snake, apple)) {
            snakeBitApple(board, snake, apple);
        }

        displayBoard(board, apple, snake);
        usleep(usleepChoice);
    }

    printf("\n\n GAME OVER");

    return 1;

}