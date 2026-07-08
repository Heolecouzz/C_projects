#include "apples.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// TO DO : Supress HasBeenTouched field
typedef struct Apple {
    int coordx;
    int coordy;
    int hasBeenTouched;
} Apple;


Apple* initApple() {
    srand(time(NULL));

    Apple* apple = malloc(sizeof(Apple));

    apple->coordx = 13;
    apple->coordy = 8;
    apple->hasBeenTouched = 0;

    return apple;
}


int getCoordxApple(Apple* apple) {
    return apple->coordx;
}


int getCoordyApple(Apple* apple) {
    return apple->coordy;
}


void setCoordxApple(Apple* apple) {
    apple->coordx = 1 + rand() % 15;
}


void setCoordyApple(Apple* apple) {
    apple->coordy = 1 + rand() % 17;
}


void setTouchedField(Apple* apple, int number) {
    if (number == 0 || number == 1) {
        apple->hasBeenTouched = number;
    } else {
        printf("The number given must either 0 or 1\n");
    }
}



int getTouchedField(Apple* apple) {
    return apple->hasBeenTouched;
}