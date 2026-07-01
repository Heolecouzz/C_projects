#include <stdio.h>
#include "Monster.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct Monsters {
    char* type;
    int health;
    int damage;
    float defense;
    float special;
    struct Monsters** defeatedHistory; // Array of pointers to monsters
    int defeatedCount; 
    int defeatedCapacity;
    int hasUsedSpecial;
} Monsters;

Monsters monstersArray[100];


void displayFeatures() {
    
    printf("Every monster has a type, health, damages, defense (which means it can decreased the damages received by x\%) and then a special capability that can be used once in a turn except for the gobelins.\n\n");
    printf("There's 4 types of monsters : Rock Golems (focused on health), Orks (focused on damages), Jaguarians (focused on defense) and Gobelins (focus on Special capability).\n\n");
    printf("Rock Golems :\nHealth : 800 - 1200\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial capability : Can regain 50\% of his health. Odds are 1/8.\n\n");
    printf("Orks :\nHealth : 300 - 500\nDamages : 25 - 60\nDefense : 0 - 10\%\nSpecial capability : Can increase his damages by 25\%. Odds are 1/8.\n\n");
    printf("Jaguarians :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 60 - 65\%\nSpecial capability : Can increase his defense by 5\%. Odds are 1/8.\n\n");
    printf("Gobelins :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial capability : Can use his opponent special capability. Odds are 3/8. If it's a gobelin fighting another one, they can't use their special capability.\n\n");
}


void createOrks() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Ork";
        monster.health = 300 + rand() % 201;
        monster.damage = 25 + rand() % 36;
        monster.defense = 1 - ((0 + rand() % 11) / 100);
        monster.special = 1.25;
        monster.defeatedHistory = NULL;
        monster.defeatedCount = 0;
        monster.defeatedCapacity = 0;
        monstersArray[k*increment] = monster;
        monster.hasUsedSpecial = 0;
    }
}


void createRockGolems() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Rock Golems";
        monster.health = 600 + rand() % 401;
        monster.damage = 15 + rand() % 6;
        monster.defense = 1 - ((0 + rand() % 11) / 100);
        monster.special = 1.25;
        monster.defeatedHistory = NULL;
        monster.defeatedCount = 0;
        monster.defeatedCapacity = 0;
        monstersArray[1 + k*increment] = monster;
        monster.hasUsedSpecial = 0;
    }
}


void createJaguarians() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Jaguarians";
        monster.health = 300 + rand() % 201;
        monster.damage = 15 + rand() % 6;
        monster.defense = 1 - ((60 + rand() % 6) / 100);
        monster.special = 1.05;
        monster.defeatedHistory = NULL;
        monster.defeatedCount = 0;
        monster.defeatedCapacity = 0;
        monstersArray[2 + k*increment] = monster;
        monster.hasUsedSpecial = 0;
    }
}


void createGobelins() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Gobelins";
        monster.health = 300 + rand() % 201;
        monster.damage = 15 + rand() % 6;
        monster.defense = 1 - ((0 + rand() % 11) / 100);
        monster.defeatedHistory = NULL;
        monster.defeatedCount = 0;
        monster.defeatedCapacity = 0;
        monstersArray[3 + k*increment] = monster;
        monster.hasUsedSpecial = 0;
    }
}


void seeMonsters() {

    for (int i = 0; i < 100; i++) {
        printf("Type : %s // Health : %d // Damages : %d\n", monstersArray[i].type, monstersArray[i].health, monstersArray[i].damage);
    }
}


void seeAliveMonsters() {

    printf("\n\n\n The monsters still alive are :\n\n");
    for (int i = 0; i < 100; i++) {
        if (monstersArray[i].health > 0) {
            printf("Type : %s // Health : %d // Damages : %d\n", monstersArray[i].type, monstersArray[i].health, monstersArray[i].damage);
        }
    }
}


void seeOneMonster(Monsters* monster) {
    printf("\nType : %s // Health : %d // Damages : %d\n", monster->type, monster->health, monster->damage);
}


void attackProcess(Monsters* attacker, Monsters* victim) {

    // Specials 
    int randNumber = rand() % 9;

    if (strcmp(attacker->type, "Ork") == 0) {
        if (randNumber == 0 && attacker->hasUsedSpecial == 0) {
            attacker->damage *= attacker->special;
            attacker->hasUsedSpecial = 1;
            printf("The Orks uses its special capability !\n");
        }
    } else if (strcmp(attacker->type, "Rock Golems") == 0){
        if (randNumber == 0 && attacker->hasUsedSpecial == 0) {
            attacker->health *= attacker->special;
            attacker->hasUsedSpecial = 1;
            printf("The Rock Golems uses its special capability !\n");
        }
    } else if (strcmp(attacker->type, "Jaguarians") == 0) {
        if (randNumber == 0 && attacker->hasUsedSpecial == 0) {
            attacker->defense *= attacker->special;
            attacker->hasUsedSpecial = 1;
            printf("The Jaguarians uses its special capability !\n");
        }
    } else {
        if ((randNumber == 0 || randNumber == 1 || randNumber == 2) && attacker->hasUsedSpecial == 0) {
            if (strcmp(victim->type, "Ork") == 0) {
                attacker->damage *= victim->special;
                printf("The Gobelin uses the Orks special capability !\n");
            } else if (strcmp(victim->type, "Rock Golems") == 0) {
                attacker->health *= victim->special; 
                printf("The Gobelin uses the Rock Golems special capability !\n");
            } else if (strcmp(victim->type, "Jaguarians") == 0) {
                attacker->defense *= victim->special;
                printf("The Gobelin uses the Jaguarians special capability !\n");
            } else {
                printf("The Gobelin cannot use its special capability against another Gobelin !\n");
            }
        }
    }

    // Attack and Defense
    if (attacker->health > 0) {
        victim->health -= (int) (attacker->damage * victim->defense);
    }
}


Monsters* getMonstersArray() {
    return monstersArray;
}


Monsters* getMonsterAtIndex(Monsters* array, int index) {
    return &array[index];
}


void healthRecovery(Monsters* monster) {
    monster->health *= 1.75;
}


void initRandomSeed() {
    srand(time(NULL));
}


int isDefeated(Monsters* victim) {

    if (victim->health <= 0) {
        return 1;
    } 
    return 0;
}



void storeMonster(Monsters* winner, Monsters* loser) {

    if (loser->health <= 0) {
        if (winner->defeatedHistory == NULL) {
            winner->defeatedCapacity = 1;
            winner->defeatedHistory = malloc(winner->defeatedCapacity * sizeof(Monsters*));
        } else {
            winner->defeatedCapacity++;
            winner->defeatedHistory = realloc(winner->defeatedHistory, winner->defeatedCapacity * sizeof(Monsters*));
        }
        
        winner->defeatedHistory[winner->defeatedCount] = loser;
        winner->defeatedCount++;
        winner->hasUsedSpecial = 0;
    }
}


void displayWinnerTree(Monsters* winner) {

    for (int i = 0; i < winner->defeatedCapacity; i++) {
        printf("%dst defeated monster :\n", i+1);
        seeOneMonster(winner->defeatedHistory[i]);
    }
}


int monsterHealth(Monsters* monster) {
    return monster->health;
}


void setHealth(Monsters* monster, int hp) {
    monster->health = hp;
}


int getWinnerIndex(Monsters* array) {

    int i = 0;
    while(array[i].health <= 0) {
        i++;
    }
    return i;
}


struct Monsters** getHistory(Monsters* monster) {
    return monster->defeatedHistory;
}