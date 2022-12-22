/*
 * num-of-lines.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Count the number of lines in a text file.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main() {

    FILE *pFile = NULL;                             // Initialize file pointer
    char *filename = "num-of-lines.txt";            // Initialize filename
    char ch;                                        // Initialize var for current char
    int lines = 0;                                  // Initialize var for line counter

    pFile = fopen(filename, "r+");                  // Open file in read+ mode

    if (pFile != NULL) {                            // If file exist, read each 
        while ((ch = fgetc(pFile)) != EOF) {        // character until EOF
            if (ch == '\n') {                       // If current character is
                lines++;                            // newline increment line
            }                                       // counter then close the file
        }                     

        fprintf(pFile,                              // Print number of lines to file
                "\nThis text file contains %d lines", 
                ++lines);

        printf("Operation successful. Closing file...\n");

        fclose(pFile);
        pFile = NULL;
    } else {                                        // If file cannot be opened
        printf("Error opening %s\n", filename);     // output error message
        printf("err: %s", strerror(errno));
    }

    return 0;
}
