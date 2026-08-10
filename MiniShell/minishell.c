#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

    int finished = 0;
    int commandLength = 100;
    int commandArrayLentgh = 50;
    char* command = malloc (commandLength * sizeof(char));
    char* commandArray = malloc(commandArrayLentgh * sizeof(char));

    while (!finished) {

        printf("> ");
        fgets(command, commandLength, stdin);
        int index = strcspn(command, "\n");
        printf("\nIndex = %d", index);
        //command[strcspn(command, "\n")] = '\0';

        if (strcmp(command, "exit") == 0) {
            printf("Goodbye, see you soon !");
            free(commandArray);
            exit(EXIT_SUCCESS);
        } else {

            printf("Command will be processed soon");
            
            // pid_t pid = fork();

            //if (pid == 0) {
                // Son part

            //}
        }
    }

    free(command);
    free(commandArray);
}