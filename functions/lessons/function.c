/**
 * function.c
 * Author:  Mark Robrigado
 * Date:    11 December 2022
 * Description: Provides information on functions.
 *       
*/

#include<stdio.h>

// Function prototype for add().
int add(int x, int y);

int main() {

    /**
     * Function
     * 
     * Function is a self-contained block of code that
     * is designed to accomplish a particular task. It 
     * reduces the overall complexity of a program by 
     * dividing it into smaller tasks.
     * Parameters specify the data type and values that
     * are passed to the function.
     * 
     * Syntax:  type function(parameters) {
     *              statement;
     *              ...
     *          }
     * 
     * Function Prototypes
     * 
     * Function prototype is a statement that a function.
     * It defines its name, return type, and type of
     * each parameters.
     * 
     * Syntax:  type function(parameters);
     * 
    */

    // Variable declaration
    int x, y;

    // Prompt the user to enter 2 integers,
    printf("Please enter 2 integers (separated by space): ");
    scanf("%d %d", &x, &y);

    // Invoke add() and output the answer.
    printf("%d + %d = %d", x, y, add(x, y)); 

    return 0;
}

/**
 * A basic function that returns the 
 * sum of 2 integers.
 * 
*/
int add(int x, int y) {
    return x + y;
}
