#include "player.h"
#include "board.h"
#include <stdio.h>
#include <assert.h>


int main() {

    token board[6][7];

    createInitialBoard(board, 6, 7);

    Player* myplayer = createPlayer("James", 'O', 1);

    printf("The player's named %s has the token %c and his id is %d\n\n", getPlayerName(myplayer), getPlayerToken(myplayer), getPlayerID(myplayer));

    setPlayerToken(myplayer, 'D');

    printf("The player's named %s has the token %c and his id is %d\n\n", getPlayerName(myplayer), getPlayerToken(myplayer), getPlayerID(myplayer));

    setPlayerName(myplayer, "Maria");

    printf("The player's named %s has the token %c and his id is %d\n\n", getPlayerName(myplayer), getPlayerToken(myplayer), getPlayerID(myplayer));

    setPlayerID(myplayer, 13);

    setPlayerID(myplayer, 2);

    printf("The player's named %s has the token %c and his id is %d\n\n", getPlayerName(myplayer), getPlayerToken(myplayer), getPlayerID(myplayer));

    setPlayerID(myplayer, 1);

    int column;
    column = playTokenColumn(myplayer, board);
    printf("%d", column);

    Player* computer = createPlayer("Computer", 'X', 2);

    freeMemory(myplayer);
    freeMemory(computer);

    return 1;
}