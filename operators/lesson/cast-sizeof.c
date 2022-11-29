/**
 * cast-sizeof.c
 * Author:  Mark Robrigado
 * Date:    29 November 2022
 * Description: Provides information on cast and sizeof operators.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Cast Operator
     * 
     * Cast operator is used to convert between different data types. 
     * Can happen implicitly by the language or explicitly by the program. 
     * Value may be truncated (less precise) and promoted (more precise).
     *
     * Syntax: (type) varName
     * 
     * sizeof Operator
     * 
     * sizeof operator Returns how many bytes are occupied in the memory 
     * by a given argument. Arguments can be variable, array, data type, 
     * or an expression.
     * 
     * Syntax: sizeof(arg)
     * 
     */

    // Variable declaration
    int x = 20;
    float y = 12.0;
    
    // Output result of type casting operation.
    printf("int x = %d\n", x);
    printf("float y = %f\n", y);
    printf("x / y = %f\n", x / y);
    printf("x / (int) y = %d\n", x / (int) y);
    printf("x + y = %d\n", x + y);
    printf("x + (int) y = %d\n", x + (int) y);
    printf("-------------------\n");

    // Output result of sizeof operator.
    printf("sizeof(x) = %d\n", sizeof(x));
    printf("sizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(x + y) = %d\n", sizeof(x + y));

    return 0;
}