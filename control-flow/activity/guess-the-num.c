/**
 * guess-the-num.c
 * Author:  Mark Robrigado
 * Date:    07 December 2022
 * Description: The program generates a random number from 0 to 20
 *              and ask the user to guess the it.
 *       
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MIN 0
#define MAX 20

/**
 * Generates random integer using rand() 
 * within the range of 0 to 20.
 * 
*/
int generateRandomNumber () {

    /**
     * Seed the random number generator 
     * using time().
     * 
    */
    srand(time(NULL));

    /**
     * Return the pseudorandom integer using 
     * rand() % max range + minimum range.
     * 
    */
    return rand() % MAX + MIN;
}

int main() {

    // Variable declaration
    int randomNumber = generateRandomNumber();
    int guessNumber, numberOfTries;

    printf("GUESS THE NUMBER\n\n");

    /**
     * Initialize number of tries to 5 and
     * loop until 0; decrement number of tries
     * by 1 per iteration.
     * 
    */
    for (numberOfTries = 5; numberOfTries > 0; numberOfTries--) {

        /**
         * Output number of tries left. If number
         * of tries = 1, output "try" instead of
         * "tries".
         *  
        */
        printf("You have %d tr%s left.\n", numberOfTries, numberOfTries == 1 ? "y" : "ies");

        // Promt the user to enter a number.
        printf("Please enter your guess (0 - 20): ");
        scanf("%d", &guessNumber);

        /**
         * If the user guess the number within 5
         * tries, exit the program
         * 
        */
        if (randomNumber == guessNumber) {
            printf("You win!");
            return 0;
        
        // If user input a number less than 0 or greater than 20.
        } else if (guessNumber < 0 || guessNumber > 20) {
            printf("Please input number between 0 - 20.\n\n");

        // If the user input number less than the random number.
        } else if (guessNumber < randomNumber) {
            printf("Your guess is less than the number.\n\n");

        // If the user input number greater than the random number.
        } else if (guessNumber > randomNumber) {
            printf("Your guess is greater than the number.\n\n");
        }
    }
    // If number of tries = 0.
    printf("You ran out of tries! The number is %d", randomNumber); 

    return 0;
}
