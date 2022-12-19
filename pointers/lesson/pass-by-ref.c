/**
 * pass-by-ref.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on passing data as reference.
 *       
*/

#include<stdio.h>

void swap(int *x, int *y);

int main() {

    /*
     *  Pass by value
     *  
     *  Pass by value copies the actual value of an argument into the function.
     *  C uses call by value to pass arguments.
     * 
     *  Pass by reference
     * 
     *  Pass by reference pass a pointer as an argument to a function.
     *  Function could also return a pointer as the result.
    */
 
    int x = 10, y = 20;                             // Initialize variables

    printf("Before swap: x = %d\ty = %d\n", x, y);  // Display values before swap
    swap(&x, &y);                                   // Call swap()
    printf("After swap:  x = %d\ty = %d\n", x, y);  // Display values after swap

    return 0;
}

/*
 *  Swap two integers.
*/
void swap(int *x, int *y) {
    
    int temp = 0;                                   // Initialize a temp variable

    temp = *x;                                      // Perform the swap
    *x = *y;
    *y = temp; 
}
