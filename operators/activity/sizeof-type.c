/**
 * sizeof-type.c
 * Author:  Mark Robrigado
 * Date:    29 November 2022
 * Description: Output the size of different data types.
 *
 */

#include<stdio.h>

int main() {

    // Output byte size of data types.
    printf("Size of `int` is %d bytes\n", sizeof(int));
    printf("Size of `short` is %d bytes\n", sizeof(short));
    printf("Size of `long` is %d bytes\n", sizeof(long));
    printf("Size of `long long` is %d bytes\n", sizeof(long long));
    printf("Size of `float` is %d bytes\n", sizeof(float));
    printf("Size of `double` is %d bytes\n", sizeof(double));
    printf("Size of `long double` is %d bytes\n", sizeof(long double));
    printf("Size of `char` is %d bytes\n", sizeof(char));
    printf("Size of `_Bool` is %d bytes\n", sizeof(_Bool));

    return 0;
}
