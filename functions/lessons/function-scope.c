/**
 * function-scope.c
 * Author:  Mark Robrigado
 * Date:    12 December 2022
 * Description: Provides information on local and global varaibles.
 *       
*/

#include<stdio.h>

// Function prototype for fun().
void fun();

// Initialize global variable.
int globalVariable = 1;

int main() {

    /**
     * Local Variables
     * 
     * Local variables are defined inside a function
     * and can only be accessed by the function in 
     * which it was defined.
     * 
     * Global Variables
     * 
     * Global variables can be accessed by any 
     * function within the program scope. They are
     * declared outside of any function. Promotes
     * coupling and should generally be avoided.
     * 
    */

    printf("int globalVariable = 1\n\n");

    // Access globalVariable inside main().
    printf("Accessing globalVariable in main()...\n");
    printf("globalVariable + 10 = %d\n\n", globalVariable + 10);

    // Access globalVariable inside fun(),
    fun();

    return 0;
}

void fun() {
    printf("Accessing globalVariable in fun()...\n");
    printf("globalVariable + 20 = %d\n\n", globalVariable + 20);
    return;
}