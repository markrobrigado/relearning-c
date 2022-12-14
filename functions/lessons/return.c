/**
 * return.c
 * Author:  Mark Robrigado
 * Date:    11 December 2022
 * Description: Provides information on returning 
 *              data from functions.
 *       
*/

#include<stdio.h>

// Function minus() return data of type int.
int subtract(int x, int y);

int main() {

    /**
     * Return
     * 
     * Functions can return data back to its
     * caller function using return keyword.
     * Return type of a function is specified
     * in its header. The data being returned
     * should be of the same type as specified
     * on the function header.
     * 
     * Syntax:  type function(parameters) {
     *              statements;
     *              ...
     *              return expression;
     *          }
     * 
     * Assigning data return to a variable:
     * 
     * Syntax:  type varName = function(arguments);
     * 
    */

    // Variable declaration
    int x, y;

    // Prompt the user to enter 2 integers,
    printf("Please enter 2 integers (separated by space): ");
    scanf("%d %d", &x, &y);

    // Invoke subtract() and output the answer.
    printf("%d - %d = %d", x, y, subtract(x, y)); 

    return 0;
}

/**
 * A basic function that returns the 
 * difference of 2 integers.
 * 
*/
int subtract(int x, int y) {

    // Return the value of x - y of type int.
    return x - y;
}
