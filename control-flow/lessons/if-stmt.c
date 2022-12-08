/**
 * if-stmt.c
 * Author:  Mark Robrigado
 * Date:    01 December 2022
 * Description: Provides information on if statement.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * If Statement
     * 
     * Provides a general decision-making capability in the 
     * form of an if statement.
     * If the condition an if statement is satisfied, the 
     * statement inside the block is executed, else the statement
     * under else statement block is excuted.
     * 
     * Syntax:  if (condition)
     *              statement;  
     *          else
     *              statement;
     * 
     *          if (condition) {
     *              statement;
     *              ...
     *          } else {
     *              statement;
     *              ...
     *          }
     *  
    */

    // Variable declaration
    int number;
    int remainder;

    // Prompt the user to enter an integer
    printf("ODD OR EVEN?\n");
    printf("Please input an integer: ");

    /**
     * Compund if statement has brackets and
     * can contain multiple statements.
     *  
    */
    if (scanf("%d", &number) == 1) { // Check if input is a number.

        // Divide the number by 2 and get the remainder
        remainder = number % 2;

        /**
         * Simple if statement has no brackets
         * and only has one statement.
         *  
         */
        if (remainder == 0) 
            printf("The number is even.\n");
        else
            printf("The number is odd.\n");
    } else {
        // If input is not an integer.
        printf("Please input integers only.");
    }
    
    return 0;
}
