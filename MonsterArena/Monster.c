#include <stdio.h>
#include "Monster.h"
#include <stdlib.h>


typedef struct Monsters {
    char* type;
    int health;
    int damage;
    int defense;
    float special[2];
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
        monster.defense = 0 + rand() % 11;
        monster.special[0] = 0.25;
        monster.special[1] = 1/8;
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
        monster.defense = 0 + rand() % 11;
        monster.special[0] = 0.25;
        monster.special[1] = 1/8;
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
        monster.defense = 35 + rand() % 6;
        monster.special[0] = 0.05;
        monster.special[1] = 1/8;
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
        monster.defense = 0 + rand() % 11;
        monster.special[1] = 3/8;
        monster.defeatedMonsters = NULL;

        monstersArray[3 + k*increment] = monster;
    }
}


void seeMonsters() {

    for (int i = 0; i < 100; i++) {
        printf("Type : %s // Health : %d // Damages : %d\n", monstersArray[i].type, monstersArray[i].health, monstersArray[i].damage);
    }
}