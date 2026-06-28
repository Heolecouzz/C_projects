#include <stdio.h>
#include "Monster.h"


typedef struct Monsters {
    char* type;
    int health;
    int damage;
    int defense;
    void* special;
    Monsters* defeatedMonsters;
} Monsters;


void displayFeatures() {
    
    printf("Every monster has a type, health, damages, defense (which means it can decreased the damages received by x\%) and then a special capability.\n\n");
    printf("There's 4 types of monsters : Rock Golems (focused on health), Orks (focused on damages), Jaguarians (focused on defense) and Gobelins (focus on Special capability).\n\n");
    printf("Rock Golems :\nHealth : 1200 - 2000\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial cpability : Can regain 50\% of his health. Odds are 1/8.\n\n");
    printf("Orks :\nHealth : 300 - 500\nDamages : 45 - 80\nDefense : 0 - 10\%\nSpecial cpability : Can increase his damages by 25\%. Odds are 1/8.\n\n");
    printf("Jaguarians :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 35 - 45\%\nSpecial cpability : Can increase his defense by 5\%. Odds are 1/8.\n\n");
    printf("Gobelins :\nHealth : 300 - 500\nDamages : 15 - 20\nDefense : 0 - 10\%\nSpecial cpability : Can use his opponent special capability. Odds are 3/8.\n\n");
}