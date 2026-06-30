#include <stdio.h>
#include "Monster.h"


int main() {

    displayFeatures();
    //initRandomSeed();

    createOrks();
    createRockGolems();
    createJaguarians();
    createGobelins();

    seeMonsters();

    Monsters* MonstersArray = getMonstersArray();

    attackProcess(getMonsterAtIndex(MonstersArray, 0), getMonsterAtIndex(MonstersArray, 1));

    seeOneMonster(getMonsterAtIndex(MonstersArray, 0));
    seeOneMonster(getMonsterAtIndex(MonstersArray, 1));

    healthRecovery(getMonsterAtIndex(MonstersArray, 1));
    seeOneMonster(getMonsterAtIndex(MonstersArray, 1));

    int ShouldBe0;

    ShouldBe0 = isDefeated(getMonsterAtIndex(MonstersArray, 1));
    printf("%d", ShouldBe0);

    while (!isDefeated(getMonsterAtIndex(MonstersArray, 1))) {
        attackProcess(getMonsterAtIndex(MonstersArray, 0), getMonsterAtIndex(MonstersArray, 1));
    }

    seeOneMonster(getMonsterAtIndex(MonstersArray, 1));

    storeMonster(getMonsterAtIndex(MonstersArray, 0), getMonsterAtIndex(MonstersArray, 1));
    
    displayWinnerTree(getMonsterAtIndex(MonstersArray, 0));

    printf("\nOkay");

    return 0;
} 

