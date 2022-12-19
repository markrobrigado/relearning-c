/**
 * string-length.c
 * Author:  Mark Robrigado
 * Date:    18 December 2022
 * Description: Counts the number of characters in a string using pointer.
 *       
*/

#include<stdio.h>

#define MAX_VALUE 256

int strlength(char *string);

int main() {

    char string[MAX_VALUE];                     
    char * pString = NULL;                      // Initialize pointer
    pString = string;                           // Assign pointer to string

    printf("STRING LENGTH\n");
    printf("Please enter a string: ");          // Prompt user input
    fgets(pString, MAX_VALUE, stdin);           // Store user input
    printf("The length of the string is: %d",   // Call strlength() and display output
            strlength(pString));

    return 0;
}

/*
 *  Returns the length of the string.
*/
int strlength(char *string) {

    char * pStringEnd = NULL;                   // Initialize pointer
    pStringEnd = string;                        // Assign pointer to string

    while (*pStringEnd != '\n') {               // Move pointer until newline
        ++pStringEnd;
    }

    return pStringEnd - string;                 // Return string length
}
