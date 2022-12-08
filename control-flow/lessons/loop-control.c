/**
 * loop-control.c
 * Author:  Mark Robrigado
 * Date:    07 December 2022
 * Description: Provides information on nested loops and loop control.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * Nested Loops
     * 
     * Nested loops are loops inside of another loop. 
     * 
     * Continue
     * 
     * Continue is used to skip the current iteration of the loop.
     * This can sometimes eliminate nesting or addtional blocks of 
     * code and can enhance redability when loops are nested deeply.
     * 
     * Break
     * 
     * Break is used to exit the loop immediately. Statements in the
     * loop are skipped and the execution is terminated. If the break
     * statement is inside a nested loop, it only affects the innermost
     * loop.
     * 
    */

    // Variable declaration
    enum Day {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day) {
        if (day == Wednesday) 
            continue;

        printf("Day %d: It's not Wednesday!\n", day);
        
        if (day == Saturday)
            break;
    }
    
    return 0;
}
