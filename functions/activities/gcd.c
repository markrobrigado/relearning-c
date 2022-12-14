/**
 * gcd.c
 * Author:  Mark Robrigado
 * Date:    12 December 2022
 * Description: Find the greatest common divisor (GCD) of a number.
 *       
*/

#include<stdio.h>

// Function prototype
int gcd(int x, int y);

int main() {

    // Variable declaration
    int x = 0, y = 0;

    printf("FIND THE GCD!\n");
    
    // Prompt the user to input 2 integers.
    printf("Please input two integers (separated by space): ");
    
    // Store value of x and y.
    scanf("%d %d", &x, &y);

    // Call gcd() and output the answer.
    printf("The GCD of %d and %d is %d", x, y, gcd(x, y));
    
    return 0;
}

/**
 * A simple function that computes
 * the gcd of two integers using 
 * Euclidean Algorithm and recursion.
 * 
*/
int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, (x % y));
}
