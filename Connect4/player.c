#include "player.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct Player {
    char* name;
    char token;
    int numPlayer;
} Player;


char* getPlayerName(Player* player) {
    return player->name;
}


void setPlayerName(Player* player, char* name) {
    player->name = name;
}


int getPlayerID(Player* player) {
    return player->numPlayer;
}


void setPlayerID(Player* player, int ID) {

    if (ID == 1 || ID == 2) {
        player->numPlayer = ID;
    } else {
        printf("The ID given to the player must be either 1 or 2\n\n");
    }
    
}


char getPlayerToken(Player* player) {
    return player->token;
}


void setPlayerToken(Player* player, char token) {
    player->token = token;
}


Player* createPlayer(char* name, char token, int id) {

    Player* player = malloc(sizeof(Player));

    player->name = name;
    player->numPlayer = id;
    player->token = token;

    if (id == 2) {
        srand(time(NULL));
    }

    return player;
}


void freeMemory(Player* player) {
    free(player);
} 


int playTokenColumn(Player* player, token board[6][7 ]) {

    int column;
    // Human players
    if (player->numPlayer == 1) {
        do {
            printf("%s, in which column do you want to play ? > ", player->name);
            int result = scanf("%d", &column);
            printf("\n");
            if (result != 1) {
                while(getchar() != '\n');
            }
            if (column != 1 && column != 2 && column != 3 && column != 4 && column != 5 && column != 6 && column != 7) {
                printf("The number given must be between 1 and 7 included !\n");
            }
        } while (column != 1 && column != 2 && column != 3 && column != 4 && column != 5 && column != 6 && column != 7);
        return column - 1;
    } else {
        // BOT -> Creates the longuest path or returns a random number
        char tokenplayer = getPlayerToken(player);

        // .XXX
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == ' ' && board[i][j + 1].playerToken == tokenplayer && board[i][j + 2].playerToken == tokenplayer && board[i][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+1);
                    return j;
                }
            }
        }

        // X.XX
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i][j + 1].playerToken == ' ' && board[i][j + 2].playerToken == tokenplayer && board[i][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+2);
                    return j + 1;
                }
            }
        }

        // XX.X
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i][j + 1].playerToken == tokenplayer && board[i][j + 2].playerToken == ' ' && board[i][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+3);
                    return j + 2;
                }
            }
        }

        // XXX.
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i][j + 1].playerToken == tokenplayer && board[i][j + 2].playerToken == tokenplayer && board[i][j + 3].playerToken == ' ') {
                    printf("%s choose to play in column %d\n", player->name, j+4);
                    return j + 3;
                }
            }
        }

        // Vertically
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 7; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j].playerToken == tokenplayer && board[i + 2][j].playerToken == tokenplayer && board[i + 3][j].playerToken == ' ') {
                    printf("%s choose to play in column %d\n", player->name, j+1);
                    return j;
                }
            }
        }

        // Diagonally
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == ' ' && board[i + 1][j + 1].playerToken == tokenplayer && board[i + 2][j + 2].playerToken == tokenplayer && board[i + 3][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+1);
                    return j;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j + 1].playerToken == ' ' && board[i + 2][j + 2].playerToken == tokenplayer && board[i + 3][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+2);
                    return j + 1;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j + 1].playerToken == tokenplayer && board[i + 2][j + 2].playerToken == ' ' && board[i + 3][j + 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+3);
                    return j + 2;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j + 1].playerToken == tokenplayer && board[i + 2][j + 2].playerToken == tokenplayer && board[i + 3][j + 3].playerToken == ' ') {
                    printf("%s choose to play in column %d\n", player->name, j+4);
                    return j + 3;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 6; j >= 3; j--) {
                if (board[i][j].playerToken == ' ' && board[i + 1][j - 1].playerToken == tokenplayer && board[i + 2][j - 2].playerToken == tokenplayer && board[i + 3][j - 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j+1);
                    return j;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 6; j >= 3; j--) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j - 1].playerToken == ' ' && board[i + 2][j - 2].playerToken == tokenplayer && board[i + 3][j - 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j);
                    return j - 1;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 6; j >= 3; j--) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j - 1].playerToken == tokenplayer && board[i + 2][j - 2].playerToken == ' ' && board[i + 3][j - 3].playerToken == tokenplayer) {
                    printf("%s choose to play in column %d\n", player->name, j-1);
                    return j - 2;
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 6; j >= 3; j--) {
                if (board[i][j].playerToken == tokenplayer && board[i + 1][j - 1].playerToken == tokenplayer && board[i + 2][j - 2].playerToken == tokenplayer && board[i + 3][j - 3].playerToken == ' ') {
                    printf("%s choose to play in column %d\n", player->name, j-2);
                    return j - 3;
                }
            }
        }

        column = rand() % 7;
        printf("%s choose to play in column %d\n", player->name, column + 1);
        return column;
    }
}