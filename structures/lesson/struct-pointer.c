/*
 * struct-pointer.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on structure and pointers.   
*/

#include <stdio.h>

int main() {

    /*
     *  Structure and pointers
     *  
     *  C allows pointers to structures.
     *  Pointers to structures are easier to manipulate than structures themselves.
     *  In some older versions of C, a structure cannot be passed as an argument.
     *  Structure pointer operator (->) is used to access members of pointers to structures.
    */

    struct date {                   // Initialize struct
        int month;
        int day;
        int year;
    };

    struct date today;              // Initialize struct variable
    struct date * pToday = NULL;    // Initialize struct pointer
    pToday = &today;                // Assign pointer to struct

    pToday->month = 12;             // Assign values to struct
    pToday->day = 19;
    pToday->year = 2022;

    printf("Today is %d/%d/%d", pToday->month, pToday->day, pToday->year);

    return 0;
}
