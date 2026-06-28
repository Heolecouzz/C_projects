#include <stdio.h>
#include "Monster.h"


int main() {

    displayFeatures();

    createOrks();
    createRockGolems();
    createJaguarians();
    createGobelins();

    seeMonsters();

    Monsters* MonstersArray = getMonstersArray();

    attackProcess(getMonsterAtIndex(MonstersArray, 0), getMonsterAtIndex(MonstersArray, 1));

    seeOneMonster(getMonsterAtIndex(MonstersArray, 0));
    seeOneMonster(getMonsterAtIndex(MonstersArray, 1));

    printf("Okay");

    return 0;
} 

