/**
 * memory-allocation.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: String I/O using dynamic memory allocation.
 *       
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    int size = 0;
    char * string = NULL;                           // Initialize string
    char * buffer = NULL;                           // Initialize input buffer
    buffer = (char*)malloc(sizeof(char));           // Allocate size of input buffer

    if (buffer != NULL) {
        printf("How many bytes to allocate? ");     // Prompt user to input size
        fgets(buffer, sizeof(buffer), stdin);       // Store input to size
        sscanf(buffer, "%d", &size);
    }

    string = (char*)malloc(size * sizeof(char));    // Allocate memory based on user input

    if (string != NULL) {
        printf("Please input a string: ");          // Prompt user to input string
        fgets(string, size, stdin);                 // Store user input
        printf("String = %s", string);              // Display string 
    }

    free(string); string = NULL;                    // Free memory
    free(buffer); buffer = NULL;

    return 0;
}
