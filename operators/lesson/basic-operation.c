/**
 * basic-operator.c
 * Author:  Mark Robrigado
 * Date:    24 November 2022
 * Description: Provides information on basic operators.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Basic Operators
     * 
     * Arithmetic Operator takes two operands and perform calculaton.
     * Logical (Boolean) Operator takes two operands and perform boolean operation.
     * Assignment Operator assigns value from RHS to the LHS of the equation. 
     * Relational Operator compares two variables.
     * 
     * Operator     Description
     *  +           Adds two operands
     *  -           Subtracts two operands
     *  *           Multiply two operands
     *  /           Divides two operands
     *  %           Returns the remainder after performing division
     *  ++          Increase int value by 1
     *  --          Decrease int value by 
     *  &&          Returns true if both operands is non-zero
     *  ||          Returns true any of the operands is non-zero
     *  !           Reverse the logical state of the operand
     *  =           Assigns value of RHS to LHS
     *  +=          Adds value of LHS to RHS and assign the value to LHS 
     *  -=          Subtract value of LHS to RHS and assign the value to LHS
     *  *=          Multiply value of LHS to RHS and assign the value to LHS
     *  /=          Divide value of LHS to RHS and assign the value to LHS
     *  ==          Checks if two operands are equal
     *  !=          Checks if two operands are not equal
     *  >           Checks if LHS is greater than RHS
     *  <           Checks if LHS is less than RHS
     *  >=          Checks if LHS is greater than or equal to RHS
     *  <=          Checks if LHS is less than or equal to RHS
     * 
     */ 

    // Variable declaration
    int x = 33;
    int y = 12;

    // Output value of variables.
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("-------------------\n");

    // Output arithmetic operations.
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);
    printf("++x = %d\n", ++x);
    printf("x++ = %d\n", x++);
    printf("--y = %d\n", --y);
    printf("y-- = %d\n", y--);
    printf("-------------------\n");

    // Output logical operations.
    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!(x && y) = %d\n", !(x && y));
    printf("-------------------\n");

    // Output assignement operations.
    printf("x = %d\n", x = 33);
    printf("x += y = %d\n", x += y);
    printf("x -= y = %d\n", x -= y);
    printf("x *= y = %d\n", x *= y);
    printf("x /= y = %d\n", x /= y);
    printf("-------------------\n");

    // Output relational operations.
    printf("x == y = %d\n", x == y);
    printf("x != y = %d\n", x != y);
    printf("x > y = %d\n", x > y);
    printf("x < y = %d\n", x < y);
    printf("x >= y = %d\n", x >= y);
    printf("x <= y = %d\n", x <= y);

    return 0;
}