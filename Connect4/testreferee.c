#include "referee.h"
#include <stdio.h>
#include "board.h"
#include "player.h"

void HorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 1, player1);
    addToken(board, 6, 7, 1, 2, player1);
    addToken(board, 6, 7, 1, 3, player1);
    addToken(board, 6, 7, 1, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 7, player1);
    addToken(board, 6, 7, 1, 6, player1);
    addToken(board, 6, 7, 1, 5, player1);
    addToken(board, 6, 7, 1, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 6, 1, player1);
    addToken(board, 6, 7, 6, 2, player1);
    addToken(board, 6, 7, 6, 3, player1);
    addToken(board, 6, 7, 6, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 6, 7, player1);
    addToken(board, 6, 7, 6, 6, player1);
    addToken(board, 6, 7, 6, 5, player1);
    addToken(board, 6, 7, 6, 4, player1);

    displayBoard(board, 6, 7);
}

void HorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 2, 3, player1);
    addToken(board, 6, 7, 2, 6, player1);
    addToken(board, 6, 7, 2, 5, player1);
    addToken(board, 6, 7, 2, 4, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 1, player1);
    addToken(board, 6, 7, 2, 1, player1);
    addToken(board, 6, 7, 3, 1, player1);
    addToken(board, 6, 7, 4, 1, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 7, player1);
    addToken(board, 6, 7, 2, 7, player1);
    addToken(board, 6, 7, 3, 7, player1);
    addToken(board, 6, 7, 4, 7, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 6, 1, player1);
    addToken(board, 6, 7, 5, 1, player1);
    addToken(board, 6, 7, 3, 1, player1);
    addToken(board, 6, 7, 4, 1, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 5, 7, player1);
    addToken(board, 6, 7, 6, 7, player1);
    addToken(board, 6, 7, 3, 7, player1);
    addToken(board, 6, 7, 4, 7, player1);

    displayBoard(board, 6, 7);
}

void VerticallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 5, 4, player1);
    addToken(board, 6, 7, 2, 4, player1);
    addToken(board, 6, 7, 3, 4, player1);
    addToken(board, 6, 7, 4, 4, player1);

    displayBoard(board, 6, 7);
}


void RightHorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 1, player1);
    addToken(board, 6, 7, 2, 2, player1);
    addToken(board, 6, 7, 3, 3, player1);
    addToken(board, 6, 7, 4, 4, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 4, player1);
    addToken(board, 6, 7, 2, 5, player1);
    addToken(board, 6, 7, 3, 6, player1);
    addToken(board, 6, 7, 4, 7, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 3, 1, player1);
    addToken(board, 6, 7, 4, 2, player1);
    addToken(board, 6, 7, 5, 3, player1);
    addToken(board, 6, 7, 6, 4, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 3, 7, player1);
    addToken(board, 6, 7, 4, 6, player1);
    addToken(board, 6, 7, 5, 5, player1);
    addToken(board, 6, 7, 6, 4, player1);

    displayBoard(board, 6, 7);
}

void RightHorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 4, 5, player1);
    addToken(board, 6, 7, 5, 6, player1);
    addToken(board, 6, 7, 2, 3, player1);
    addToken(board, 6, 7, 3, 4, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard1(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 4, player1);
    addToken(board, 6, 7, 2, 3, player1);
    addToken(board, 6, 7, 3, 2, player1);
    addToken(board, 6, 7, 4, 1, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard2(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 1, 7, player1);
    addToken(board, 6, 7, 2, 6, player1);
    addToken(board, 6, 7, 3, 5, player1);
    addToken(board, 6, 7, 4, 4, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard3(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 3, 4, player1);
    addToken(board, 6, 7, 4, 3, player1);
    addToken(board, 6, 7, 5, 2, player1);
    addToken(board, 6, 7, 6, 1, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard4(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 3, 7, player1);
    addToken(board, 6, 7, 4, 6, player1);
    addToken(board, 6, 7, 5, 5, player1);
    addToken(board, 6, 7, 6, 4, player1);

    displayBoard(board, 6, 7);
}

void LeftHorizontallyWinningBoard5(token board[6][7], Player* player1) {

    addToken(board, 6, 7, 2, 6, player1);
    addToken(board, 6, 7, 3, 5, player1);
    addToken(board, 6, 7, 4, 4, player1);
    addToken(board, 6, 7, 5, 3, player1);

    displayBoard(board, 6, 7);
}



int main() {

    token board[6][7];
    Player* player1 = createPlayer("James", 'X', 1);
    int ShouldBeTrue;
    int ShouldBeFalse;

    // Test if there's any problem on indexes while iterating through an empty array
    createInitialBoard(board, 6, 7);
    ShouldBeFalse = hasWon(player1, board);
    printf("ShouldBeFalse : %d\n\n", ShouldBeFalse);

    // Horizontals tests !
    printf("HORIZONTAL TESTS :\n");

    HorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    HorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    HorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    HorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    HorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    // Vertical tests !
    printf("VERTICAL TESTS :\n");

    createInitialBoard(board, 6, 7);
    VerticallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    VerticallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    VerticallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    VerticallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    VerticallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);


    // Horizontals tests !
    printf("HORIZONTALS TESTS :\n");

    createInitialBoard(board, 6, 7);
    RightHorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    RightHorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    RightHorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    RightHorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    RightHorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    LeftHorizontallyWinningBoard1(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    LeftHorizontallyWinningBoard2(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    LeftHorizontallyWinningBoard3(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    LeftHorizontallyWinningBoard4(board, player1);
    ShouldBeTrue = hasWon(player1, board);

    createInitialBoard(board, 6, 7);
    LeftHorizontallyWinningBoard5(board, player1);
    ShouldBeTrue = hasWon(player1, board);


}