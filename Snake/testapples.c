#include "apples.h"
#include <stdio.h>
#include <assert.h>

int main() {

    Apple* myApple;
    

    myApple = initApple();

    assert(getCordxApple(myApple) == 7);
    assert(getCordyApple(myApple) == 13);
    assert(getTouchedField(myApple) == 0);

    setTouchedField(myApple, 3);
    setTouchedField(myApple, 1);
    assert(getTouchedField(myApple) == 1);

    while (getCordxApple(myApple) != 1) {
        setCordxApple(myApple);
    }
    assert(getCordxApple(myApple) == 1);
    printf("Row 1 passed\n");

    while (getCordxApple(myApple) != 15) {
        setCordxApple(myApple);
    }
    assert(getCordxApple(myApple) == 15);
    printf("Row 15 passed\n");

    while (getCordyApple(myApple) != 1) {
        setCordyApple(myApple);
    }
    assert(getCordyApple(myApple) == 1);
    printf("Col 1 passed\n");

    while (getCordyApple(myApple) != 17) {
        setCordyApple(myApple);
    }
    assert(getCordyApple(myApple) == 17);
    printf("Col 17 passed\n");

    printf("ALL TESTS PASSED SUCESSFULLY\n");

    return 1;
}