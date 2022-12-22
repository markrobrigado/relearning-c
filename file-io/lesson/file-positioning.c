/*
 * file-positioning.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Provides information on file positioning.   
*/

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main() {

    /*
     *  File positioning
     *  
     *  There are functions to access data in random sequence rather than sequential.
     *  File positioning includes finding out where you are in a file and moving
     *  to a given point in a file.
     *  
     *  ftell() & fseek()
     *  
     *  ftell() function is designed to be used with the positioning function fseek().
     *  Accepts file pointer as an argument and returns a long as the position.
     *  Value is the offset in bytes from the beginning of the file.
     * 
     *  Syntax: long name = ftell(*file);
     *  Syntax: fseek(*file, offset, origin)
     * 
     *  Origin      Definition
     *  SEEK_SET    Defines the beginning of the file
     *  SEEK_CUR    Defines the current position in the file
     *  SEEK_END    Defines the end of the file
     * 
     *  fgetpos() & fsetpos()
     * 
     *  fgetpos() function is designed to be used with the positioning function fsetpos().
     *  Stores the current posiion and file state information.
     *  Returns 0 if operation is successful, returns nonzero if failed.
     * 
     *  Syntax: fgetpos(*file, fpos *position);
     *  Syntax: fsetpos(*file, fpos *position);
    */

    FILE *pFile = NULL;                         // Initialize file pointer
    char *filename = "testfile.txt";            // Initialize filename
    int len;                                    // Initialize int var for ftell()

    pFile = fopen(filename, "r");               // Open file in read mode

    if (pFile != NULL) {                        // If file exist, move position
        fseek(pFile, 0, SEEK_END);              // to EOF and close file else 
        len = ftell(pFile);                     // output error message
        printf("File: %s\nFile size: %d bytes",
                filename, len);

        fclose(pFile);
        pFile = NULL;
    } else {
        printf("Failed to open %s\n", filename);
        printf("err: %s\n", strerror(errno));
    }

    return 0;
}
