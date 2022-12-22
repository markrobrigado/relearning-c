/*
 * to-upper.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Converts characters in a file to uppercase.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>

int main() {

    FILE *pFile = NULL;                             // Initialize file pointer
    char *filename = "to-upper.txt";                // Initialize filename
    char *string = NULL;                            // Initialize file content pointer
    char ch;

    pFile = fopen(filename, "r+");                  // Open file in read+ mode

    if (pFile != NULL) {

        FILE *pTempFile = NULL;                     // Initialize temp file pointer
        char *tempfile = "temp_file.txt";           // Initialize temp filename
        pTempFile = fopen(tempfile, "w+");          // Open file in write+ mode

        while ((ch = fgetc(pFile)) != EOF) {        // Uppercase every character
            fputc(toupper(ch), pTempFile);          // then write to temp file
        }

        fclose(pFile);                              // Close files
        fclose(pTempFile);
        pTempFile = NULL;
        pFile = NULL;

        remove(filename);                           // Delete file, rename tempfile to file
        rename(tempfile, filename);

        pFile = fopen(filename, "r");               // Open renamed file in read mode

        while ((ch = fgetc(pFile)) != EOF) {        // Output file contents
            printf("%c", ch);
        }

        fclose(pFile);                              // Close file
        pFile = NULL;
    } else {                                        // If file cannot be opened
        printf("Error opening %s\n", filename);     // output error message
        printf("err: %s", strerror(errno));
    }

    return 0;
}
