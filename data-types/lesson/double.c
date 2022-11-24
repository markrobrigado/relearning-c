/**
 * double.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Double data type.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Double
     * 
     * Double is a data type that represents floating-point 
     * values with double precision.
     * Double can store twice as much significant digits.
     * All floating-point values are taken as double values 
     * by the C compiler.
     * 
     * Syntax: double varName = n;
     * 
     * Type             Size (bytes)    Range
     * double               8           1.7E-308 to 1.7E+308
     * long double          10          3.4E-4932 to 1.1E+4932
     * 
     */

    double sampleDouble = 6.9;

    // Displaying output using different format specifiers
    printf("Displaying double 6.9 using %%f:     %f\n", sampleDouble);
    printf("Displaying double 6.9 using %%.nf:   %.2f\n", sampleDouble);
    printf("Displaying double 6.9 using %%e:     %e\n", sampleDouble);
    printf("Displaying double 6.9 using %%g:     %g\n", sampleDouble);
    printf("Displaying double 6.9 using %%a:     %a\n", sampleDouble);

    return 0;
}