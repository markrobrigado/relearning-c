/*
 * nested-struct.c
 * Author:  Mark Robrigado
 * Date:    19 December 2022
 * Description: Provides information on nested structures.   
*/

#include<stdio.h>

int main() {

    /*
     *  Nested structures
     *  
     *  Nested structures allows a structure to be defined inside a structure.
    */

    struct date {           // Initialize struct
        int month;
        int day; 
        int year;
    };

    struct time {           // Initialize struct
        int hour;
        int minutes;
        int seconds;
    };
    
    struct dateTime {       // Initialize nested struct
        struct date sdate;
        struct time stime; 
    }today;

    // Assign values to struct
    today.sdate = (struct date){.month = 12, .day = 19, .year = 2022};
    today.stime = (struct time){.hour = 18, .minutes = 45, .seconds = 0};

    printf("Today is %.2d/%.2d/%d %.2d:%.2d:%.2d", 
            today.sdate.month, today.sdate.day, today.sdate.year,
            today.stime.hour, today.stime.minutes, today.stime.seconds);

    return 0;
}
