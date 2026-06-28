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
    Monsters* defeatedMonsters;
} Monsters;

Monsters monstersArray[100];


void displayFeatures() {
    
    printf("Every monster has a type, health, damages, defense (which means it can decreased the damages received by x\%) and then a special capability.\n\n");
    printf("There's 4 types of monsters : Rock Golems (focused on health), Orks (focused on damages), Jaguarians (focused on defense) and Gobelins (focus on Special capability).\n\n");
    printf("Rock Golems :\nHealth : 1200 - 2000\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial capability : Can regain 50\% of his health. Odds are 1/8.\n\n");
    printf("Orks :\nHealth : 300 - 500\nDamages : 45 - 80\nDefense : 0 - 10\%\nSpecial capability : Can increase his damages by 25\%. Odds are 1/8.\n\n");
    printf("Jaguarians :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 35 - 45\%\nSpecial capability : Can increase his defense by 5\%. Odds are 1/8.\n\n");
    printf("Gobelins :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial capability : Can use his opponent special capability. Odds are 3/8.\n\n");
}


void createOrks() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Ork";
        monster.health = 300 + rand() % 201;
        monster.damage = 45 + rand() % 36;
        monster.defense = 1 - ((0 + rand() % 11) / 100);
        monster.special = 1.25;
        monster.defeatedMonsters = NULL;

        monstersArray[k*increment] = monster;
    }
}


void createRockGolems() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Rock Golems";
        monster.health = 1200 + rand() % 801;
        monster.damage = 15 + rand() % 6;
        monster.defense = 1 - ((0 + rand() % 11) / 100);
        monster.special = 1.5;
        monster.defeatedMonsters = NULL;

        monstersArray[1 + k*increment] = monster;
    }
}


void createJaguarians() {

    int increment = 4;

    for (int k = 0; k < 25; k++) {
        Monsters monster;
        monster.type = "Jaguarians";
        monster.health = 300 + rand() % 201;
        monster.damage = 15 + rand() % 6;
        monster.defense = 1 - ((35 + rand() % 6) / 100);
        monster.special = 1.05;
        monster.defeatedMonsters = NULL;

        monstersArray[2 + k*increment] = monster;
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
        monster.defeatedMonsters = NULL;

        monstersArray[3 + k*increment] = monster;
    }
}


void seeMonsters() {

    for (int i = 0; i < 100; i++) {
        printf("Type : %s // Health : %d // Damages : %d\n", monstersArray[i].type, monstersArray[i].health, monstersArray[i].damage);
    }
}


void seeOneMonster(Monsters* monster) {
    printf("\nType : %s // Health : %d // Damages : %d\n", monster->type, monster->health, monster->damage);
}


void attackProcess(Monsters* attacker, Monsters* victim) {

    // Specials 
    int randNumber = rand() % 9;

    if (strcmp(attacker->type, "Orks")) {
        if (randNumber == 0) {
            attacker->damage *= attacker->special;
        }
    } else if (strcmp(attacker->type, "Rock Golems")){
        if (randNumber == 0) {
            attacker->health *= attacker->special;
        }
    } else if (strcmp(attacker->type, "Jaguarians")) {
        if (randNumber == 0) {
            attacker->defense *= attacker->special;
        }
    } else {
        if (randNumber == 0 || randNumber == 1 || randNumber == 2) {
            if (strcmp(victim->type, "Orks")) {
                attacker->damage *= victim->special;
            } else if (strcmp(victim->type, "Rock Golems")) {
                attacker->health *= victim->special; 
            } else if (strcmp(victim->type, "Jaguarians")) {
                attacker->defense *= victim->special;
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