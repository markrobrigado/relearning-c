/**
 * args-params.c
 * Author:  Mark Robrigado
 * Date:    11 December 2022
 * Description: Provides information on function 
 *              arguments and parameters.
 *       
*/

#include<stdio.h>

// int x and int y are the function parameters.
int multiply(int x, int y);

int main() {

    /**
     * Arguments
     * 
     * Arguments is the data that is passed into
     * the function when it is called.
     * 
     * Parameters
     * 
     * Parameter is a variable in a function declaration
     * and function definition/implementation. It
     * acts as a placeholder for the argument that
     * is needed to be specified when the function 
     * is called. 
     * Parameter names are local to the function.
     * They assume the values of the arguments 
     * passed when the function is called.
     * 
    */

    // Variable declaration
    int x, y;

    // Prompt the user to enter 2 integers,
    printf("Please enter 2 integers (separated by space): ");
    scanf("%d %d", &x, &y);

    /**
     * Invoke multiply(), pass x and y as 
     * function arguments and output the answer.
     * 
    */ 
    printf("%d * %d = %d", x, y, multiply(x, y));

    return 0; 
}

/**
 * A basic function that returns the 
 * product of 2 integers.
 * 
*/
int multiply(int x, int y) {
    return x * y;
}
