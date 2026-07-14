#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

    char* command = malloc(50 * sizeof(char));

    printf("%s", argv[0]);
    system("clear");

    if (argc != 1) {
        printf("Only type ./minishell with no other arguments !");
        exit(EXIT_FAILURE);
    }

    while (strcmp(command, "exit") != 0) {

        printf("> ");
        scanf("%49s", command);

        if (strcmp(command, "exit") == 0) {
            printf("Goodbye, see you soon !");
            free(command);
            exit(EXIT_SUCCESS);
        } else {
            printf("The command %s cannot actually be treated yet, but this will be available soon !\n", command);
        }
    }
}