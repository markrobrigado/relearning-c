/**
 * bitwise-operator.c
 * Author:  Mark Robrigado
 * Date:    24 November 2022
 * Description: Provides information on bitwise operators.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Bitwise Operators
     *  
     * Used in operations to test and set indivicual bits in an integer varaible.
     * *Not used in common programs,
     * 
     * Operator     Description
     *  &           Copies a bit to the result if it exist in both operands.
     *  |           Copies a bit to the result if it exist in either operands.
     *  ^           Copies a bit to the result if it is set one operand and !both.
     *  ~           Unary operator that flip bits. 
     *  <<          LHS value is moved left by the bits specified by the RHS.
     *  >>          LHS value is moved right by the bits specified by the RHS.
     * 
     */

    // Variable declaration
    unsigned int x = 60; // 0011 1100
    unsigned int y = 13; // 0000 1101

    // Output result of bitwise operation.
    printf("unsined int x = %d\n", x);
    printf("unsined int y = %d\n", y);
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);
    printf("x ^ y = %d\n", x ^ y);
    printf("~x = %d\n", ~x);
    printf("~y = %d\n", ~y);
    printf("x << 2 = %d\n", x << 2);
    printf("x >> 2 = %d\n", x >> 2);

    return 0;
}
