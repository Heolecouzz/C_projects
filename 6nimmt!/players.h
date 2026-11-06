/* Players that plays the game */

typedef struct Player Player;

/* The player play the card thanks to its strategy */
int playCard(Player player);

/* Setting a strategy to a player */
void setStrategy(Player player);