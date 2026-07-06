/* This module handles the apple */

typedef struct Apple Apple;

/* Initialize the apple and returns it */
Apple* initApple();


/* Get the coordonate x */
int getCordxApple(Apple* apple);


/* Get the coordonate y */
int getCordyApple(Apple* apple);


/* Set the coordonate x */
void setCordxApple(Apple* apple);


/* Set the coordonate x */
void setCordyApple(Apple* apple);


/* Set the hasBeenTouched field to the number input (1 = touched / 0 = not touched yet) */
void setTouchedField(Apple* apple, int number);


/* Get the touched field */
int getTouchedField(Apple* apple);