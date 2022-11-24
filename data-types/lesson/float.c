/**
 * float.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Float data type.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Float
     * 
     * Float is a data type that represents floating-point values.
     * Floating-point values can also be expressed using scientific notation.
     * 
     * Syntax: float varName = n;
     * 
     * Type             Size (bytes)    Range
     * float                4           3.4E-38 to 3.4E+38
     * 
     */

    float sampleFloat = 6.9;

    // Displaying output using different format specifiers
    printf("Displaying float 6.9 using %%f:     %f\n", sampleFloat);
    printf("Displaying float 6.9 using %%.nf:   %.2f\n", sampleFloat);
    printf("Displaying float 6.9 using %%e:     %e\n", sampleFloat);
    printf("Displaying float 6.9 using %%g:     %g\n", sampleFloat);
    printf("Displaying float 6.9 using %%a:     %a\n", sampleFloat);

    return 0;
}