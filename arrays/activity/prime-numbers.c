/**
 * prime-numbers.c
 * Author:  Mark Robrigado
 * Date:    09 December 2022
 * Description: This program outputs all prime number from 1 - 100.
 *       
*/

#include<stdio.h>
#include<stdbool.h>

int main() {

    /**
     * Initialize prime numbers array and 
     * hardcode the first 2 prime numbers.
     * Prime numbers array index starts a 2.
     *  
    */
    int primeNumArr[50] = {[0]=2, [1]=3}, startIndex = 2;
    bool isPrime;

    // Loop through the numbers by 2, skipping even numbers.
    for (int i = 5; i <= 100; i += 2) {
        isPrime = true;

        /**
         * Primality test: if a numebr is not evenly
         * divisible by any other previous prime numbers
         * it is a prime number.
         * 
        */
        for (int j = 1; isPrime && i / primeNumArr[j] >= primeNumArr[j]; j++) {
            if (i % primeNumArr[j] == 0) {
                isPrime = false;
            }
        }

        /**
         * If the number pass the primality 
         * test, add the number to the array.
         * 
        */
        if (isPrime == true) {
            primeNumArr[startIndex] = i;
            startIndex++;
        }
    }

    // Output all prime numbers.
    for (int i = 0; i < startIndex; i++) {
        printf("%d\n", primeNumArr[i]);
    }
    
    return 0;
}
