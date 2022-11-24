/**
 * enum.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Enum data type.
 *       
 */

#include<stdio.h>

int main() {
    /**
     * Enum
     * 
     * Enum is a data type that allows a programmer to define a 
     * variable and specify the valid values that could be stored 
     * into that variable.
     * 
     * Syntax: enum varName {item1, item2, item3...};
     * 
     * Compiler treats enum as int (e.g. item1 = 0).
     * If a specific value n is assigned to an item, the next item's value
     * will be n+1 (e.g. {item1, item2 = 4, item3}, item3 = 5).
     * 
     */

    enum month {January=1, February, March, April, May, June, July, August,
    September, October, November, December};

    enum month currentMonth = November; 
    _Bool isEqual = currentMonth==11;
    
    printf("%i", isEqual);

    return 0;
}