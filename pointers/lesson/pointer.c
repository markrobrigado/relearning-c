/**
 * pointer.c
 * Author:  Mark Robrigado
 * Date:    18 December 2022
 * Description: Provides information on pointers.
 *       
*/

#include<stdio.h>

int main() {

    /*
     *  Pointer
     *  
     *  Pointer is a variable whose value is the address of another variable.
     *  Pointer should be of the same type as the variable it is pointing to.
     *  Use names beginning with p as pointer names.
     *  Pointer should always be initialized to NULL.
     *  Use the address of operator (&) to initialize a pointer with the address of variable.
     *  Use the indirection operator (*) to access value pointed by a pointer.
     *   
     *  Syntax: type * pName = NULL;
     *          type * pName = &varName;  
    */
 
    int x = 12;
    int * pX = NULL;
    pX = &x;

    printf("Address of pX: %p\n", &pX);
    printf("Size of pX is: %d bytes\n", sizeof(pX));
    printf("Value of pX: %p\n", pX);
    printf("Value of variable pointed by pX: %d\n", *pX);

    return 0; 
}
