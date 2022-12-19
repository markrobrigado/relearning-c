/**
 * square-a-num.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Sqaures a number by itself.
 *       
*/

#include<stdio.h>

#define BUFFER 8

int square(int *x);

int main() {

    char input[BUFFER];
    int number = 0;

    printf("SQUARE A NUMBER\n");
    printf("Please input an integer: ");                // Prompt user input
    fgets(input, sizeof(input), stdin);                 // Store user input
    sscanf(input, "%d", &number);
    printf("%d square is %d", number, square(&number)); // Call square() and display output

    return 0;
}

/*
 *  Returns the square of a number.
*/
int square(int *x) {
    return (*x) * (*x); 
}
