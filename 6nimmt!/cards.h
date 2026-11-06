/* Define a card */

typedef struct Card Card;

/* Returns the card number */
int getCardNumber(Card* card);

/* Returns the points of the card */
int getCardPoints(Card* card);

/* Creates one card */
Card* createCard(int number, int points);

/* Free the memory space allocated for cards */
void freeCard(Card* card);