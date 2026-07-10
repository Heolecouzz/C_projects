#include "apples.h"
#include <stdio.h>
#include <assert.h>

int main() {

    Apple* myApple;
    

    myApple = initApple();

    assert(getCoordxApple(myApple) == 13);
    assert(getCoordyApple(myApple) == 8);
    assert(getTouchedField(myApple) == 0);

    setTouchedField(myApple, 3);
    setTouchedField(myApple, 1);
    assert(getTouchedField(myApple) == 1);

    while (getCoordxApple(myApple) != 1) {
        setCoordxApple(myApple);
    }
    assert(getCoordxApple(myApple) == 1);
    printf("Row 1 passed\n");

    while (getCoordxApple(myApple) != 17) {
        setCoordxApple(myApple);
    }
    assert(getCoordxApple(myApple) == 17);
    printf("Row 15 passed\n");

    while (getCoordyApple(myApple) != 1) {
        setCoordyApple(myApple);
    }
    assert(getCoordyApple(myApple) == 1);
    printf("Col 1 passed\n");

    while (getCoordyApple(myApple) != 15) {
        setCoordyApple(myApple);
    }
    assert(getCoordyApple(myApple) == 15);
    printf("Col 17 passed\n");

    printf("ALL TESTS PASSED SUCESSFULLY\n");

    return 1;
}