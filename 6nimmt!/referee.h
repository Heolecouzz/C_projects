/* The referee handles the board game and ensure that everything is done can be allowed */

typedef struct Card Card;
typedef struct Player Player;

/* Shuffle the pile of cards */
void shuffle(Card* pile);

/* Gives the card to each player */
void handCardsOut(Player* player, Card* card, Card* pile);

