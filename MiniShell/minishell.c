#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define MAX_CMD_LEN 1024 // Maximum length of the CLI
#define MAX_ARGS 64      // Maximum number of arguments

// Function that takes a string and create an array of commands
void parse_command(char* input, char** args) {

    int i = 0;
    char* token = strtok(input, " \t\n");

    while (token != NULL && i < MAX_ARGS - 1) {
        args[i] = token;
        i++;
        token = strtok(NULL, " \t\n");
    }
    
    // execvp needs that the array finishes by NULL
    args[i] = NULL; 
}


int lengthArray(char** args) {

    int count = 0;
    int arrayLen = 0;
    while (args[count] != NULL) {
        arrayLen++;
        count++;
    }

    return arrayLen;
}

int main() {

    int finished = 0;
    char command[MAX_CMD_LEN];
    char* args[MAX_ARGS]; // Array of pointers to words of the command

    while (!finished) {

        printf("> ");
        if (fgets(command, MAX_CMD_LEN, stdin) == NULL) {
            printf("\n");
            break; 
        }

        parse_command(command, args);
        int arrayLen = lengthArray(args);

        if (strcmp(args[0], "exit") == 0) {
            printf("Goodbye, see you soon !\n");
            break;
        } 
        else {
            for (int i = 0; i < arrayLen; i++) {
                printf("[Debug] Command part %d : %s\n", i, args[i]);
            }
        }
    }

    return EXIT_SUCCESS;
}