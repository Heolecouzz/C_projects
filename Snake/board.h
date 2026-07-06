/* This module creates the board for the snake game */

typedef struct Case {
    int isEdge;
    int hasSnake;
} Case;


/* Creates the board for the game (15x17) */
void createBoard(Case board[17][19]);


/* Display board */
void displayBoard(Case board[17][19]);