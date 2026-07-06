#include "apples.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


typedef struct Apple {
    int coordx;
    int coordy;
    int hasBeenTouched;
} Apple;


Apple* initApple() {
    srand(time(NULL));

    Apple* apple = malloc(sizeof(Apple));

    apple->coordx = 7;
    apple->coordy = 13;
    apple->hasBeenTouched = 0;

    return apple;
}


int getCordxApple(Apple* apple) {
    return apple->coordx;
}


int getCordyApple(Apple* apple) {
    return apple->coordy;
}


void setCordxApple(Apple* apple) {
    apple->coordx = 1 + rand() % 15;
}


void setCordyApple(Apple* apple) {
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