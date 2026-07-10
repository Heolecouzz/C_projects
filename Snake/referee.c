#include "apples.h"
#include "snake.h"
#include "board.h"


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
        if (getCoordx(snake, index) == getCoordxApple(apple) && getCoordy(snake, index) == getCoordyApple(apple)) {
            return 1;
        }
    }
    return 0;
}


void snakeBitApple(Case board[17][19], Snake* snake, Apple* apple) {

    int CoordxApple, CoordyApple, CoordxSnake, CoordySnake;
    int allGood = 0;

    int snakeLength = getSnakeLength(snake);

    CoordxSnake = getCoordx(snake, 0);
    CoordySnake = getCoordy(snake, 0);

    do {
        int good = 0;
        setCoordxApple(apple);
        setCoordyApple(apple);
        CoordxApple = getCoordxApple(apple);
        CoordyApple = getCoordyApple(apple);
        
        for (int i = 0; i < snakeLength; i++) {
            if (getCoordx(snake, i) != CoordxApple || getCoordy(snake, i) != CoordyApple) {
                good++;
            }
        }
        if (good == snakeLength) {
            allGood++;
        }
    } while (!allGood);

    setCase(board, CoordySnake, CoordxSnake, SNAKE);
    setCase(board, CoordyApple, CoordxApple, APPLE);

    setAllowcated(snake, snakeLength);
    setSnakePart(snake, snakeLength - 1, BODY);
    setSnakePart(snake, snakeLength, QUEUE);

    CoordxSnake = getCoordx(snake, snakeLength - 1);
    CoordySnake = getCoordy(snake, snakeLength - 1);
    Directions direction = getDirection(snake, snakeLength - 1);

    if (direction == EAST) {
        setCoordx(snake, snakeLength, CoordxSnake - 1);
        setCoordy(snake, snakeLength, CoordySnake);
    } else if (direction == WEST) {
        setCoordx(snake, snakeLength, CoordxSnake + 1);
        setCoordy(snake, snakeLength, CoordySnake);
    } else if (direction == NORTH) {
        setCoordx(snake, snakeLength, CoordxSnake);
        setCoordy(snake, snakeLength, CoordySnake + 1);
    } else {
        setCoordx(snake, snakeLength, CoordxSnake);
        setCoordy(snake, snakeLength, CoordySnake - 1);
    }

}


void MoveSnake(Case board[17][19], Snake* snake, Directions newDirection) {

    int snakeLength = getSnakeLength(snake);
    int formerX, formerY;
    Directions formerD;

    setDirection(snake, 0, newDirection);

    formerX = getCoordx(snake, snakeLength - 1);
    formerY = getCoordy(snake, snakeLength - 1);

    setCase(board, formerY, formerX, NONE);

    for (int i = snakeLength - 1; i > 0; i--) {
        formerX = getCoordx(snake, i - 1);
        formerY = getCoordy(snake, i - 1);
        formerD = getDirection(snake, i - 1);

        setCoordx(snake, i, formerX);
        setCoordy(snake, i, formerY);
        setDirection(snake, i, formerD);
    }

    formerD = getDirection(snake, 0);
    formerX = getCoordx(snake, 0);
    formerY = getCoordy(snake, 0);

    if (formerD == NORTH) {
        setCoordx(snake, 0, formerX);
        setCoordy(snake, 0, formerY - 1);
    } else if (formerD == SOUTH) {
        setCoordx(snake, 0, formerX);
        setCoordy(snake, 0, formerY + 1);
    } else if (formerD == EAST) {
        setCoordx(snake, 0, formerX + 1);
        setCoordy(snake, 0, formerY);
    } else {
        setCoordx(snake, 0, formerX - 1);
        setCoordy(snake, 0, formerY);
    }
    
    setCase(board, getCoordy(snake, 0), getCoordx(snake, 0), SNAKE);
}


int newDirectionAllowed(Snake* snake, Directions newDirection) {

    Directions direction = getDirection(snake, 0);

    if (direction == NORTH) {
        if (newDirection == SOUTH) {
            return 0;
        }
        return 1;
    } else if (direction == SOUTH) {
        if (newDirection == NORTH) {
            return 0;
        }
        return 1;
    } else if (direction == EAST) {
        if (newDirection == WEST) {
            return 0;
        }
        return 1;
    } else {
        if (newDirection == EAST) {
            return 0;
        }
        return 1;
    }
}


int snakeCollisionSnake(Snake* snake) {

    int CoordxHead = getCoordx(snake, 0);
    int CoordyHead = getCoordy(snake, 0);
    int length = getSnakeLength(snake);

    for (int i = 1; i < length; i++) {
        if (getCoordx(snake, i) == CoordxHead && getCoordy(snake, i) == CoordyHead) {
            return 1;
        }
    }

    return 0;
}