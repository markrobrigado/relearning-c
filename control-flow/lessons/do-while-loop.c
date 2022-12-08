/**
 * do-while-loop.c
 * Author:  Mark Robrigado
 * Date:    06 December 2022
 * Description: Provides information on do and do-while loop.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * While Loop
     * 
     * While loop executes a block of statement as long 
     * as the specified condition evaluates to true.
     * 
     * Syntax:  while (condition) {
     *              statement;
     *              ...
     *          }
     * 
     * Do-While Loop
     * 
     * Do-While loop executes a block of statement for the
     * first time unconditionally and guarantees to execute
     * atleast once or as long as the specified condition 
     * evaluates to true.
     * 
     * Syntax:  do {
     *              statement;
     *              ...
     *          } while (condition)
     * 
    */

    // Variable declaration
    unsigned long long sum = 0LL;
    unsigned int num = 0;

    // Prompt the user to input an integer to be added.
    printf("Enter the number of integers you want to add: ");
    scanf("%u", &num);

    int i = 1;

    // While i is less than num, sum = sum + i.
    while (i < num) {
        sum += i++;
    }

    // Output the answer.
    printf("Using While Loop: The sum of the first %d numbers is %llu\n", num, sum);

    // Reset values for do-while.
    i=1; sum=0;

    // Do sum = sum + i, while i is less than num.
    do {
        sum += i++;
    } while (i < num);
    
    // Output the answer.
    printf("Using Do-While Loop: The sum of the first %d numbers is %llu", num, sum);

    return 0;
}
