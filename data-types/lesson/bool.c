/**
 * bool.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Bool data type.
 *       
 */

#include<stdio.h>
#include<stdbool.h>

int main() {

    /**
     * Bool 
     * 
     * Bool is a data type that represent a Boolean Condition (true or false).
     * Stores the value 0 (false) or 1 (true).
     * 
     */

    _Bool sample_Bool = 0;
    bool sampleBool = 1; // using stdbool.h

    // Displaying output using variables and keywords
    printf("Displaying %i (false) using sample_Bool value\n", sample_Bool);
    printf("Displaying %i (false) using false keyword\n", false); // using stdbool.h
    printf("Displaying %i (true) using sampleBool value\n", sampleBool);
    printf("Displaying %i (true) using true keyword\n", true); // using stdbool.h

    return 0;
}