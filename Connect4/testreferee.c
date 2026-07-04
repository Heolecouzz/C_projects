#include "referee.h"
#include <stdio.h>
#include "board.h"
#include "player.h"
#include <assert.h>

void HorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 0, 0, player1);
    addToken(board, 0, 1, player1);
    addToken(board, 0, 2, player1);
    addToken(board, 0, 3, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 0, 3, player1);
    addToken(board, 0, 6, player1);
    addToken(board, 0, 5, player1);
    addToken(board, 0, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 5, 1, player1);
    addToken(board, 5, 2, player1);
    addToken(board, 5, 3, player1);
    addToken(board, 5, 0, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 5, 3, player1);
    addToken(board, 5, 6, player1);
    addToken(board, 5, 5, player1);
    addToken(board, 5, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 2, 3, player1);
    addToken(board, 2, 6, player1);
    addToken(board, 2, 5, player1);
    addToken(board, 2, 4, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 1, 0, player1);
    addToken(board, 2, 0, player1);
    addToken(board, 3, 0, player1);
    addToken(board, 0, 0, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 1, 6, player1);
    addToken(board, 2, 6, player1);
    addToken(board, 3, 6, player1);
    addToken(board, 0, 6, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 2, 0, player1);
    addToken(board, 5, 0, player1);
    addToken(board, 3, 0, player1);
    addToken(board, 4, 0, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 5, 6, player1);
    addToken(board, 2, 6, player1);
    addToken(board, 3, 6, player1);
    addToken(board, 4, 6, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 5, 4, player1);
    addToken(board, 2, 4, player1);
    addToken(board, 3, 4, player1);
    addToken(board, 4, 4, player1);

    displayBoard(board, 6, 7);
}


void RightHorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 1, 1, player1);
    addToken(board, 2, 2, player1);
    addToken(board, 3, 3, player1);
    addToken(board, 0, 0, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 0, 3, player1);
    addToken(board, 1, 4, player1);
    addToken(board, 2, 5, player1);
    addToken(board, 3, 6, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 2, 0, player1);
    addToken(board, 3, 1, player1);
    addToken(board, 4, 2, player1);
    addToken(board, 5, 3, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 2, 6, player1);
    addToken(board, 3, 5, player1);
    addToken(board, 4, 4, player1);
    addToken(board, 5, 3, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 4, 5, player1);
    addToken(board, 5, 6, player1);
    addToken(board, 2, 3, player1);
    addToken(board, 3, 4, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 0, 3, player1);
    addToken(board, 1, 2, player1);
    addToken(board, 2, 1, player1);
    addToken(board, 3, 0, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 0, 6, player1);
    addToken(board, 1, 5, player1);
    addToken(board, 2, 4, player1);
    addToken(board, 3, 3, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 2, 3, player1);
    addToken(board, 3, 2, player1);
    addToken(board, 4, 1, player1);
    addToken(board, 5, 0, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 2, 6, player1);
    addToken(board, 3, 5, player1);
    addToken(board, 4, 4, player1);
    addToken(board, 5, 3, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 2, 6, player1);
    addToken(board, 3, 5, player1);
    addToken(board, 4, 4, player1);
    addToken(board, 5, 3, player1);

    displayBoard(board, 6, 7);
}

void TestGetLastRowPlayable(token board[6][7], Player* player1) {

    addToken(board, 0, 0, player1);
    addToken(board, 1, 0, player1);
    addToken(board, 2, 0, player1);
    addToken(board, 3, 0, player1);
    addToken(board, 4, 0, player1);
    addToken(board, 5, 0, player1);

    addToken(board, 1, 1, player1);
    addToken(board, 2, 1, player1);
    addToken(board, 3, 1, player1);
    addToken(board, 4, 1, player1);
    addToken(board, 0, 1, player1);

    addToken(board, 1, 2, player1);
    addToken(board, 2, 2, player1);
    addToken(board, 3, 2, player1);
    addToken(board, 0, 2, player1);

    addToken(board, 1, 3, player1);
    addToken(board, 2, 3, player1);
    addToken(board, 0, 3, player1);

    addToken(board, 1, 4, player1);
    addToken(board, 0, 4, player1);

    addToken(board, 0, 5, player1);

    displayBoard(board, 6, 7);
}



int main() {

    token board[6][7];
    Player* player1 = createPlayer("James", 'X', 1);
    int ShouldBeTrue;
    int ShouldBeFalse;

    // Test if there's any problem on indexes while iterating through an empty array
    createInitialBoard(board);
    ShouldBeFalse = hasWon(player1, board);
    printf("ShouldBeFalse : %d\n\n", ShouldBeFalse);

    // Horizontals tests !
    printf("HORIZONTAL TESTS :\n");

    HorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    HorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    HorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    HorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    HorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    // Vertical tests !
    printf("VERTICAL TESTS :\n");

    createInitialBoard(board);
    VerticallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    VerticallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    VerticallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    VerticallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    VerticallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);


    // Horizontals tests !
    printf("HORIZONTALS TESTS :\n");

    createInitialBoard(board);
    RightHorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    RightHorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    RightHorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    RightHorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    RightHorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    LeftHorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    LeftHorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    LeftHorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    LeftHorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    LeftHorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board);
    TestGetLastRowPlayable(board, player1);
    assert(getLastRowPlayable(board, 0) == -1);
    assert(getLastRowPlayable(board, 1) == 5);
    assert(getLastRowPlayable(board, 2) == 4);
    assert(getLastRowPlayable(board, 3) == 3);
    assert(getLastRowPlayable(board, 4) == 2);
    assert(getLastRowPlayable(board, 5) == 1);
    assert(getLastRowPlayable(board, 6) == 0);


    freeMemory(player1);
    printf("ALL TESTS PASSED SUCESSFULLY !!");
    return 1;
}