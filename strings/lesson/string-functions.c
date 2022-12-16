/**
 * string-functions.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Provides information on common string functions.
 *       
*/

#include<stdio.h>
#include<string.h>

int main() {

    /**
     * String Length
     * 
     * strlen() function is used to get
     * the length of a string literal.
     * Value returned as size_t.
     * 
     * Syntax:  strlen(string);
     *          strlen(varName);
     * 
     * String Copy
     * 
     * strcpy() function is used to copy
     * a string to an existing string.
     * 
     * Syntax:  strcpy(destination, source);
     * 
     * strncpy() takes a third argument n,
     * where n = max number of characters 
     * to copy.
     * 
     * Syntax:  strncpy(destination, source, n);
     * 
     * String Concatenation
     * 
     * strcat() function takes two strings
     * as arguments wherein the second string
     * is appended to the first string.
     * Second string is not alterned.
     * 
     * Syntax:  strcat(destination, source);
     * 
     * strncat() takes a third argument n,
     * where n = max number of characters 
     * to append.
     * 
     * Syntax:  strncat(destination, source, n);
     * 
     * String Comparison
     * 
     * strcmp() function is used to compare
     * strings. It can be used to compare 
     * strings of different sizes.
     * Returns 0 if string1 == string2 and !0.
     * Returns 0 < value < 0 if string1 != string2.
     * 
     * Syntax:  strcmp(string1, string2);
     * 
     * strncmp() takes a third argument n,
     * where n = max number of characters 
     * to compare.
     * 
     * Syntax:  strncmp(string1, string2, n);
     * 
    */ 

    // Variable declaration
    char src[] = "Hello";
    char dest[10];

    // Output variables.
    printf("char src[] = \"%s\"\n", src);
    printf("char dest[] = \"%s\"\n", dest);

    // Output the length of each variables.
    printf("strlen(src) = %d\n", strlen(src));
    printf("strlen(dest) = %d\n", strlen(dest));

    // Copy the value of src to dest.
    strncpy(dest, src, sizeof(dest) - 1);
    printf("strncpy(dest, src, sizeof(dest) - 1) >> dest = %s\n", dest);

    // Concatenate "World" to dest.
    strncat(dest, " World!", sizeof(dest) - 1);
    printf("strncat(dest, \" World!\", sizeof(dest) - 1) >> dest = %s\n", dest);

    // Compare sting src and dest.
    printf("strcmp(src, dest) = %d", strcmp(src, dest));

    return 0;
}
