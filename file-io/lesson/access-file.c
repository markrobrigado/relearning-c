/*
 * access-file.c
 * Author:  Mark Robrigado
 * Date:    21 December 2022
 * Description: Provides information on accessing files.   
*/

#include<stdio.h>
#include<errno.h>
#include<string.h>

int main() {

    /*
     *  Accessing Files
     *
     *  A program references a file through a file pointer.
     *  A file pointer points to a struct type FILE that repesents a stream.
     *  The limit of files opened at one time is defined as FOPEN_MAX in <stdio.h>.
     *  
     *  fopen()
     * 
     *  Returns the file pointer for a specific external file.
     *  The pointer can be used to reference the file in other IO operations.
     *  If file cannot be opened, fopen() returns NULL.
     *  
     *  Syntax: FILE *fopen(name, mode);
     * 
     *  Mode        Description
     *  "w"         Open a text file for write operations.
     *  "a"         Open a text file for append operations.
     *  "r"         Open a text file for read operations.
     *  "w+"        Open a file for update, create a file if it does not exist.
     *  "a+"        Open a file for update, create a file if it does not exist.
     *  "r+"        Open a file for update.
     * 
     *  Renaming Files
     * 
     *  rename() function is used to rename files.
     *  The file must not be opened when renaming otherwise the operation will fail.
     *  Returns 0 if operation was successful otherwise returns nonzero.
     * 
     *  Syntax: rename(oldname, newname);
     * 
     *  Closing Files
     *  
     *  fclose() function is used to close file.
     *  Returns EOF (int) if an error occurs, 0 if successful.
     * 
     *  Syntax: fclose(FILE *pFile);
     * 
     *  Deleting Files
     * 
     *  remove() function is used to delete file.
     *  The file must not be opened when removing otherwise the operation will fail.
     * 
     *  Syntax: remove(filepath);
    */

    FILE *pFile = NULL;                         // Initialize file pointer
    char *filename = "testfile.txt";            // Initialize filename

    pFile = fopen(filename, "r");               // Open file in read mode

    if (pFile != NULL) {                        // If file exist, close file
        fclose(pFile);                          // else output error message
        pFile = NULL;
    } else {
        printf("Failed to open %s\n", filename);
        printf("err: %s\n", strerror(errno));
    }

    return 0;
}