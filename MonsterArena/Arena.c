#include "Monster.h"
#include <stdio.h>

void play(Monsters* player1, Monsters* player2) {

    int shift = 0;
    while(!isDefeated(player1) && !isDefeated(player2)) {
        if (shift % 2 == 0) {
            attackProcess(player1, player2);
            shift++;
        } else {
            attackProcess(player2, player1);
            shift++;
        }
    }
    if (isDefeated(player1)) {
        storeMonster(player2, player1);
    } else {
        storeMonster(player1, player2);
    }
}

void recover(Monsters* MonstersArray) {

    for (int i = 0; i < 100; i++) {
        Monsters* monster = getMonsterAtIndex(MonstersArray, i);
        if (!isDefeated(monster)) {
            healthRecovery(monster);
        }
    }
}

int numAliveMonster(Monsters* MonsterArray) {

    int num = 0;
    for (int i = 0; i < 100; i++) {
        Monsters* monster = getMonsterAtIndex(MonsterArray, i);
        if (!isDefeated(monster)) {
            num++;
        }
    }
    return num;
}

int main() {

    initRandomSeed();

    // Creation of monsters
    createOrks();
    createRockGolems();
    createJaguarians();
    createGobelins();
    seeMonsters();

    int numturn = 0;
    Monsters* MonstersArray = getMonstersArray();

    int roundDuelNumbers[5] = {25, 12, 6, 3, 1};
    int roundDuelCount = 0;

    while(numAliveMonster(MonstersArray) != 1) {
        if (numturn == 0) {
            numturn++;
            // 1st round different from the others
            printf("1st ROUND :\n\n");
            for (int i = 0; i < 50; i++) {
                Monsters* player1 = getMonsterAtIndex(MonstersArray, i);
                Monsters* player2 = getMonsterAtIndex(MonstersArray, 99-i);
                play(player1, player2);
            }
            recover(MonstersArray); 
            seeAliveMonsters();
        } else {
            if (numAliveMonster(MonstersArray) % 2 == 1) {
                int min = 10000;
                Monsters* toBeEjected;
                for (int i = 0; i < 100; i++) {
                    Monsters* monster = getMonsterAtIndex(MonstersArray, i);
                    if (!isDefeated(monster)) {
                        if (monsterHealth(monster) < min) {
                            min = monsterHealth(monster);
                            toBeEjected = monster;
                        }
                    }
                }
                setHealth(toBeEjected, -1);
            }
            int w = 0;
            printf("\n\n %d ROUND : \n\n", roundDuelCount + 1);
            for (int i = 0; i < roundDuelNumbers[roundDuelCount]; i++) {
                while (isDefeated(getMonsterAtIndex(MonstersArray, w))) {
                    w++;
                }
                Monsters* player1 = getMonsterAtIndex(MonstersArray, w);
                w++;
                while (isDefeated(getMonsterAtIndex(MonstersArray, w))) {
                    w++;
                }
                Monsters* player2 = getMonsterAtIndex(MonstersArray, w);
                play(player1, player2);
            }
            recover(MonstersArray);
            roundDuelCount++;

            seeAliveMonsters();
        }
    }

    int winnerIndex = getWinnerIndex(MonstersArray);

    displayWinnerTree(getMonsterAtIndex(MonstersArray, winnerIndex));

    printf("Okay");

}