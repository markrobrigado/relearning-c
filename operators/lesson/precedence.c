/**
 * precedence.c
 * Author:  Mark Robrigado
 * Date:    29 November 2022
 * Description: Provides information on operator precedence.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Operator Precedence
     * 
     * Operator precedence determines the grouping of terms in an 
     * expression and how an expression is evaluated. Operators that 
     * have the same precedence is evaluated from left to right.
     * 
     * Category         Operator                            Associativity
     * Postfix          () [] -> . ++ --                    Left to right
     * Unary            + - ! ~ ++ -- (type) * & sizeOf     Right to left
     * Multiplicative   * / %                               Left to right                
     * Additive         + -                                 Left to right
     * Shift            << >>                               Left to right
     * Relational       < <= > >=                           Left to right
     * Equality         == !=                               Left to right
     * Bitwise AND      &                                   Left to right
     * Bitwise XOR      ^                                   Left to right 
     * Bitwise OR       |                                   Left to right
     * Logical AND      &&                                  Left to right
     * Logical OR       ||                                  Left to right
     * Conditional      ?:                                  Right to left
     * Assignment       = += -= *= /= %= >>= <<= &= ^= |=   Right to left
     * Comma            ,                                   Left to right
     * 
     */

    // Variable declarations
    int x = 20;
    int y = 12;
    int z = 3;

    // Ouput operator precedence sample.
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("x + y * z = %d\n", x + y * z);
    printf("(x + y) * z = %d", (x + y) * z);    

    return 0;
}