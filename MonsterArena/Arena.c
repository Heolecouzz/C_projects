#include "Monster.h"

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

    // Recovery
    for (int i = 0; i < 100; i++) {
        Monsters* monster = getMonsterAtIndex(MonstersArray, i);
        if (!isDefeated(monster)) {
            healthRecovery(monster);
        }
    }
    

    // 2nd round (50 players remaining) 
    for (int i = 0; i < 25; i++) {
        if (!isDefeated(getMonsterAtIndex(MonstersArray, i))) {
            Monsters* player1 = getMonsterAtIndex(MonstersArray, i);
        }
    }

}