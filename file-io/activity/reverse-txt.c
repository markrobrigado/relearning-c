/*
 * reverse-txt.c
 * Author:  Mark Robrigado
 * Date:    22 December 2022
 * Description: Prints the contents of a text file in reverse.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main() {

    FILE *pFile = NULL;                             // Initialize file pointer
    char *filename = "reverse-txt.txt";             // Initialize filename

    pFile = fopen(filename, "r");                   // Open file in read mode

    if (pFile != NULL) {
        fseek(pFile, 0, SEEK_END);                  // Move the position to EOF
        int pos = ftell(pFile);
        
        while (pos > 0) {                           // Move position from last
            fseek(pFile, --pos, SEEK_SET);          // until the first character
            printf("%c", fgetc(pFile));             // Print current character
        }

        fclose(pFile);                              // Close file
        pFile = NULL;
    } else {                                        // If file cannot be opened
        printf("Error opening %s\n", filename);     // output error message
        printf("err: %s", strerror(errno));
    }

    return 0;
}
