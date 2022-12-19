/**
 * array-pointer.c
 * Author:  Mark Robrigado
 * Date:    18 December 2022
 * Description: Provides information on array pointers and pointer arithmetic.
 *       
*/

#include<stdio.h>

int main() {

    /*
     *  Array Pointer
     *  
     *  Array pointer points to the type of element that is contained in the array.
     *  Pointers to arrays generally result in code that uses less memory and executes faster.
     * 
     *  Syntax: type * pName = arrayName;
     *          type * pName = &arrayName[0];
     * 
     *  Pointer Arithmetic
     *  
     *  Array elements can be accessed through pointers by adding the index of
     *  the element to the pointer then apply the indirection operator.
     * 
     *  Syntax: *(ptr + i)
    */

    int intArr[5] = {1, 2, 3, 4, 5};
    int * pIntArr = NULL;
    pIntArr = intArr;

    for (size_t i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(pIntArr + i));
    }

    return 0;
}
