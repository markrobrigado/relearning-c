/**
 * for-loop.c
 * Author:  Mark Robrigado
 * Date:    06 December 2022
 * Description: Provides information on for loop.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * For Loop
     * 
     * For loop executes a block of statements 
     * with a given number of time.
     * 
     * Counter sets the initial value to a loop control variable.
     * Condition is a logical expression that determines whether the loop
     * should continue to be excuted.
     * Iterator iterates the counter until the condition is met.
     * 
     * Syntax:  for (counter; condition; iterator) {
     *              statement;
     *              ...
     *          }
     * 
    */

    // Variable declaration
    unsigned long long sum = 0LL;
    unsigned int num = 0;

    // Prompt the user to input an integer to be added.
    printf("Enter the number of integers you want to add: ");
    scanf("%u", &num);

    /**
     * Initialize the loop counter i to 0. If i is less than
     * num, sum = sum + i.
     * 
    */
    for (int i = 0; i < num; sum += i++);

    // Output the answer.
    printf("The sum of the first %d numbers is %llu", num, sum);

    return 0;
}
