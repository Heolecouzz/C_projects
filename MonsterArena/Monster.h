/* This module is used to create monsters */ 

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


/* Allow monsters to get back Health after the duel */
void healthRecovery(Monsters* monster);


/* Allow monsters to evolve up to 5% on every features*/
void evolve(Monsters* monster);



/* Display the whole tree until the final winner */
void displayWinnerTree();