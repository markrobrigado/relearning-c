/*
 * write-file.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Provides information on writing files.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

#define MAX_LENGTH 100

int main() {

    /*
     *  Writing character
     *
     *  fputc() function writes a single character to a text file.
     *  Writes character specified to the file  specified by the file pointer.
     *  Returns the character if successful, returns EOF if operation failed.
     * 
     *  Syntax: fputc(char, *file);
     * 
     *  Writing string
     * 
     *  fputs() function writes string to any file or stream.
     *  Writes characters from a string until '\0' character is reached.
     *  Does not write null terminator to the file.
     * 
     *  Syntax: fputs(*string, *file);
     * 
     *  fprintf() function writes string in a formatted format.
     *  Usage is similar to printf() but to a file.
     * 
     *  Syntax: fprintf(*stream, *format);
    */

    FILE *pFile = NULL;                         // Initialize file pointer
    char *filename = "testfile.txt";            // Initialize filename
    char str[MAX_LENGTH];                       // Initialize string var for fgets()
    int ch;                                     // Initialize int var for fputc()

    pFile = fopen(filename, "w+");               // Open file in write+ mode

    if (pFile != NULL) {                        // If file exist, write characters
        for (ch = 33; ch <= 100; ch++) {        // to file and close the file
            fputc(ch, pFile);                   // else output error message
        }

        fputs("\nHello ", pFile);

        fprintf(pFile, "%s", "World!");

        printf("Operation successful. Closing file...\n");

        fclose(pFile);
        pFile = NULL;
    } else {
        printf("Failed to open %s\n", filename);
        printf("err: %s\n", strerror(errno));
    }

    return 0;
}
