/*
 * read-file.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Provides information on reading files.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

#define MAX_LENGTH 100

int main() {

    /*
     *  Reading character
     *
     *  fgetc() function reads a character from an opened text file.
     *  Takes a file pointer as an argument and returns characters read as int.
     * 
     *  Syntax: int name = fgetc(*file);
     * 
     *  Reading string
     * 
     *  fgets() function reads from any file or stream.
     *  Characters are read until a \n is read or nchars-1 characters have been read.
     *  Returns pointer to string if no error, returns NULL if there is an error.
     * 
     *  Syntax: fgets(*string, nchars, *stream);
     * 
     *  rewind() function positions the file pointer argument at the beginning.
     *
     *  Syntax: rewind(*file);
    */

    FILE *pFile = NULL;                         // Initialize file pointer
    char *filename = "testfile.txt";            // Initialize filename
    char str[MAX_LENGTH];                       // Initialize string var for fgets()
    int ch;                                     // Initialize int var for fgetc()

    pFile = fopen(filename, "r");               // Open file in read mode

    if (pFile != NULL) {                        // If file exist, read contents
        while ((ch = fgetc(pFile)) != EOF) {    // and close file else output
            printf("%c", ch);                   // error message
        }

        rewind(pFile);

        while (fgets(str, sizeof(str), pFile) != NULL) {
            printf("\n%s", str);
        }

        fclose(pFile);
        pFile = NULL;
    } else {
        printf("Failed to open %s\n", filename);
        printf("err: %s\n", strerror(errno));
    }

    return 0;
}