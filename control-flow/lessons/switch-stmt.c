/**
 * switch-stmt.c
 * Author:  Mark Robrigado
 * Date:    01 December 2022
 * Description: Provides information on switch statement.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * Switch Statement
     * 
     * Switch stetment is used when a variable is successively
     * compared against different values. 
     * If the value of the expression is found in one of the case,
     * the statements in that case gets executed. Otherwise, statement
     * under default statement gets executed.
     * 
     * Syntax:  switch (expression) {
     *              case 1:
     *                  statement;
     *                  ...
     *                  break;
     *              case n:
     *                  statement;
     *                  ... 
     *                  break;
     *              default:
     *                  statement;
     *                  ...
     *                  break;
     *          }
     * 
    */

    // Variable declaration
    float num1, num2;
    char operator;
    
    // Prompt the user to input an expression.
    printf("SIMPLE CALCULATOR\n");
    printf("Please input an expression <num> <operator> <num>\n>> ");
    
    // Scan user input and store to variables.
    scanf("%f %c %f", &num1, &operator, &num2);
    printf("Ans: ");

    // Output the answer, switch based on operator.
    switch (operator) {
        // If operator is '+', perform addition.
        case '+':
            printf("%g", num1 + num2);
            break;
        // If operator is '-', perform subtraction.
        case '-':
            printf("%g", num1 - num2);
            break;
        // If operator is '*', perform multiplication.
        case '*':
            printf("%g", num1 * num2);
            break;
        // If operator is '/', perform division.
        case '/':
            // If divisor == 0, output an error message.
            if (num2 == 0)
                printf("err: Cannot divide by 0");
            else
                printf("%g", num1 / num2);
            break;
        // If operator is '%', cast num1 & num2 to int and perform modulo.
        case '%':
            printf("%d", (int) num1 % (int) num2);
            break;
        // If expression contains illegal characters, output an error message.
        default:
            printf("err: Error parsing expression.");
            break;
    }

    return 0;
}