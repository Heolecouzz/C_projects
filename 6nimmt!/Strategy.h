/* Define the strategy for players. Each strategy returns the right card for players to place*/

typedef struct Player Player;
typedef struct Card Card;

/* In this strategy, the player plays its cards in an ascending way*/
Card* ascendingStrategy(Player* player);

/* In this strategy, the player plays the card which are the nearest from another card on the board */
Card* nearestStrategy(Player* player, Card** board);

/* In this strategy, the player plays in the lane with the less number of cards */
Card* minLaneStrategy(Player* player, Card** board);

/* In this strategy, the player plays in the lane with the minimum of points */
Card* minPointStrategy(Player* player, Card** board);
