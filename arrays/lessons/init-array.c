/**
 * init-arrays.c
 * Author:  Mark Robrigado
 * Date:    08 December 2022
 * Description: Provides information on arrays.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * Arrays
     * 
     * Arrays are used to store multiple values of the 
     * same type. The size of an array is fixed and the 
     * items in an array are referred to as elements.
     * 
     * Elements are accessed by the same name and specified
     * using an index. Index starts at 0.
     * 
     * Syntax: type varName [size];
     * 
    */

    // Variable declaration
    // Initialize grades array of size 10.
    int grades[10];
    int count = 10, sum = 0;
    float average;

    // Promt the user the enter 10 grades.
    printf("Please enter 10 grades:\n");

    // Iterate through index 0 to 10 of grades array.
    for (int i = 0; i < count; i++) {
        // Output grade input marker. 
        printf("%2u) ", i + 1);

        // Scan and store grades.
        scanf("%d", &grades[i]);

        // Add all grades.
        sum += grades[i];
    }

    // Get the average using sum of grades/number of grades.
    average = (float)sum/count;

    // Output the average.
    printf("Your grade average is: %g", average);

    return 0;
}
