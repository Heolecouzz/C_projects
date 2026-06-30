#include "Monster.h"

void play(Monsters* player1, Monsters* player2) {

    int shift = 0;
    while(!isDefeated(player1) || !isDefeated(player2)) {
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

int main() {

    initRandomSeed();

    // Creation of monsters
    createOrks();
    createRockGolems();
    createJaguarians();
    createGobelins();
    seeMonsters();

    Monsters* MonstersArray = getMonstersArray();

    // 1st round
    for (int i = 0; i < 50; i++) {
        Monsters* player1 = getMonsterAtIndex(MonstersArray, i);
        Monsters* player2 = getMonsterAtIndex(MonstersArray, 100-i);
        play(player1, player2);
    }
    recover(MonstersArray); 


    // 2nd round (50 players remaining)
    int w = 0;
    for (int i = 0; i < 25; i++) {
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


    // 3rd round (25 players remaining, one has to be ejected)
    int min = 10000;
    Monsters* toBeEjected = NULL;
    for (int i = 0; i < 100; i++) {
        Monsters* monster = getMonsterAtIndex(MonstersArray, i);
        if (!isDefeated(monster)) {
            if (monster->health < min) {
                min = monster->health;
                toBeEjected = monster;
            }
        }
    }
    toBeEjected->health = -1;

}