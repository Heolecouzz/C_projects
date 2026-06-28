/* This module is used to create monsters */ 

#ifndef MONSTER_H
#define MONSTER_H

typedef struct Monsters Monsters;


/* For each types of monsters, display their features at their creation. Example :
Type : Ork
Health : 300 - 500
Damages : 45 - 62
Defense : 0 - 10 %
Special : Can increase its damages by 25%. Odds are 1/8*/ 
void displayFeatures();


/* Create 25 Orks with some randomness*/
void createOrks();


/* Create 25 Rock Golems with some randomness*/
void createRockGolems();


/* Create 25 Jaguarians with some randomness*/
void createJaguarians();


/* Create 25 Gobelins with some randomness*/
void createGobelins();


/* To attack the victim. Handle the whole process of attacking (Special capability, Attack, Defense)*/
void attackProcess(Monsters* attacker, Monsters* victim);


/* Monsters recover 75% of their actual health */
void healthRecovery(Monsters* monster);


/* Allow monsters to evolve up to 5% on every features*/
void evolve(Monsters* monster);


/* Display the whole tree until the final winner */
void displayWinnerTree();


/* Display the statistics of all monsters after creation*/
void seeMonsters();


/* Display the statistics of one monster*/
void seeOneMonster(Monsters* monster);


/* Get the array of monsters, after creating the monsters*/
Monsters* getMonstersArray();


/* Get one specific monster, using its array and index*/
Monsters* getMonsterAtIndex(Monsters* array, int index);


/* Initialize the randomness to time */
void initRandomSeed();

#endif