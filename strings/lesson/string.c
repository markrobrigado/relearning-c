/**
 * string.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Provides information on strings.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * String
     * 
     * A string literal is a sequence of characters
     * enclosed in double-quotations ("").
     * Null character (\0) is adedd to the end of 
     * each string to mark the end of it. A sting is
     * always terminated by null character, therefore 
     * the length of a string is always n+1, where 
     * n = number of characters.
     * C has no special data type for string instead,
     * a string is stored in char array of specific size.
     * If size is too small, the compiler cannot fit a
     * terminating character and might result to errors.
     * It is better to let the compiler to figure it out.
     * 
     * Syntax:  char[size_t] varName = "string";
     *          char[size_t] varName = {'char1'...'charn'};
     * 
    */

    // Initialize char array str[].
    char prompt[] = "Please input your name: ";
    char input[10];

    // Output str.
    printf("%s", prompt);
    scanf("%s", input); // Ampersand (&) is not used on char/char[].

    // Explicitly terminate the string using /0.
    printf("Hello, %s!\0 You will not be able to see this.", input);

    return 0;
}
