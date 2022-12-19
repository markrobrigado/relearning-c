/**
 * memory-allocation.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on memory allocation.
 *       
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    /*
     *  Memory allocation
     *  
     *  In C, the compiler automatically allocates the correct amount of storage based on data type.
     *  Memory can be dynamically allocated using C memory allocation functions.
     *  Dynamic memory allocation is possible only because pointers are available.
     *  Dynamic memory allocation reserves space in a memory area called heap.
     *  Allocated memory should always be released when it is no longer used. 
     * 
     *  malloc()
     * 
     *  Specify the number of bytes of memory that you want allocate as the argument.
     *  Returns the address of the first byte of memory that it allocated.
     * 
     *  Syntax: type * pName = (type*)malloc(size);
     * 
     *  calloc()
     * 
     *  Allocates memory as a number of elements of a given size.
     *  Initializes the memory that is allocated to zero.
     * 
     *  Syntax: type * pName = (type*)calloc(n, size);
     *  
     *  realloc()
     * 
     *  Enables the reuse or extend memory that is previously allocated using malloc() and calloc().
     *  Preserves the contents of the original memory area.
     * 
     *  Syntax: realloc(pointer, size);
     * 
     *  free()
     * 
     *  Releases dynamically allocated memory of an address stored in a pointer.
     * 
     *  Syntax: free(pointer);
    */

    char * string = NULL;                               // Initialize pointer

    string = (char*)malloc(5 * sizeof(char));           // Allocate memory to pointer
    strcpy(string, "Bob");                              // Assign value to string
    printf("string = %s\taddress = %p\n",               // Output string value and address
            string, string);

    string = (char*)realloc(string, 15 * sizeof(char)); // Reallocate memory to pointer
    strcat(string, " and Alice");                       // Append value to string
    printf("string = %s\taddress = %p\n",               // Output string value and address
            string, string);

    free(string);                                       // Free memory allocated
    string = NULL;                                      // Reinitialize pointer to NULL 

    return 0;
}
