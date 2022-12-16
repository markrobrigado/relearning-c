/**
 * const-string.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Provides information on string constants.
 *       
*/

#include<stdio.h>

// Define the value of pi = 3.14
#define PI 3.14

int main() {

    /**
     * Define
     * 
     * define is a C prepocessor that lets you 
     * define constants. It can appear anywhere 
     * in the program but it is generally found 
     * in the beginning of the program. 
     * 
     * Syntax:  #define NAME value
     *          #define NAME expression
     * 
     * Const
     * 
     * const is added on C90 and can also be used
     * to define constants.  
     * 
     * Syntax:  const type name = value;
     *          type const name = value; 
     * 
    */

    // Define constant value for size = 10.
    const int size = 10;

    // Output PI + size.
    printf("PI = %g\nsize = %d\nPI + size = %g", PI, size, PI + size);

    return 0;
}
