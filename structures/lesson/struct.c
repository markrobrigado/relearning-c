/*
 * struct.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on structures.   
*/

#include<stdio.h>

int main() {

    /*
     *  Structures
     *  
     *  Structures allows grouping of elements together.
     *  Structure declaration describes how members are put together.
     *  `struct` keyword enables a collection of variables to be defined.
     * 
     *  Syntax: struct name {
     *              type name;
     *              ... 
     *          }varName;
     * 
     *  Accessing members 
     * 
     *  Member seclection operator (.) is used to access a member of a struct.
     *  
     *  Syntax: name.member;
    */

    struct date {       // Initialize struct
        int month;
        int day;
        int year;
    }today;

    today.month = 12;   // Assign values to struct
    today.day = 19;
    today.year = 2022;

    printf("Today is %d/%d/%d", today.month, today.day, today.year);

    return 0;
}
