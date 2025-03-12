#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
     if (s == NULL) {
        printf("Memory reallocation failed\n");
        return 1;  // Exit the program if reallocation fails
    }

    // Tokenize the string by spaces
    char *token = strtok(s, " ");
    
    // Loop through the tokens and print each word on a new line
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");  // Get the next token
    }

    // Free the allocated memory
    free(s);

    return 0;
}
