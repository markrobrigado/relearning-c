/**
 * int.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Int data type.
 *       
 */

#include<stdio.h>

int main() {

    /**
     * Int
     * 
     * Int is a signed data type (positive, negetive, or zero) that 
     * represents integral values.
     * Minus (-) sign denotes a negative value. 
     * 0x denotes that the value is being expressed as a hexadecimal (base 16).
     * 
     * Syntax: int varName = n;
     * 
     * Type             Size (bytes)    Range
     * int                  2           -32,768 to 32,767
     * signed int           2           -32,768 to 32,767
     * unsinged int         2           0 to 65535
     * short int            1           -128 to 127
     * signed short int     1           -128 to 127
     * unsigned short int   1           0 to 255
     * long int             4           -2,147,483,648 to 2,147,483,647
     * signed long int      4           -2,147,483,648 to 2,147,483,647
     * unsigned long int    4           0 to 4,294,967,295
     * 
     */

    int sampleInt = -10;

    // Displaying output using different format specifiers
    printf("Displaying int -10 using %%i: %i\n", sampleInt);
    printf("Displaying int -10 using %%x: %x\n", sampleInt);
    printf("Displaying int -10 using %%o: %o\n", sampleInt);
    printf("Displaying int -10 using %%u: %u\n", sampleInt);
    printf("Displaying int -10 using %%hi: %hi\n", sampleInt);
    printf("Displaying int -10 using %%hu: %hu\n", sampleInt);
    printf("Displaying int -10 using %%ld: %ld\n", (long)sampleInt);
    printf("Displaying int -10 using %%lu: %lu\n", (long)sampleInt);
    printf("Displaying int -10 using %%lld: %lld\n", (long long)sampleInt);
    printf("Displaying int -10 using %%llu: %llu\n", (long long)sampleInt);

    return 0;
}