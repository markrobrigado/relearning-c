/*
 * struct-array.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on array of structures.   
*/

#include<stdio.h>

int main() {

    /*
     *  Array of structures
     *  
     *  Array of structures allows an arbitrary number of the same structure.
     *  The member selection operator (.) is also used to acess members of an array 
     *  of structure but with the addition of index number. (e.g. name[i].member).
     * 
     *  Syntax: struct name {
     *              type name;
     *              ...
     *          }varName[i];
    */

    struct date {           // Initialize struct
        int month;
        int day;
        int year;
    }holiday[3] = {         //  Assign values to struct
        {1, 1, 2022},
        {1, 7, 2022},
        {12, 25, 2022},
    };

    for (size_t i = 0; i < 3; i++) {
        printf("holiday[%d]: %.2d/%.2d/%d\n", i, holiday[i].month, 
                holiday[i].day, holiday[i].year);
    }
    
    return 0;
}
