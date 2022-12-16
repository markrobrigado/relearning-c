/**
 * analyze-string.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Provides information on more string functions.
 *       
*/

#include<stdio.h>
#include<string.h>

int main() {

    char str[] = "Hello World!";

    /**
     * String Search
     * 
     * strchr() function searches a string 
     * for a specified character. The value
     * returned is the address of the character.
     * If character is not found, function
     * returns NULL.
     * 
     * Syntax:  strchr(string, char);
     * 
    */
    char ch = 'e';
    char *pCh = NULL;
    pCh = strchr(str, ch);
    printf("%s\n", pCh);

    /**
     * strstr() function searches a string 
     * for a specified substring. The value
     * returned is the address of the string.
     * If string is not found, function
     * returns NULL.
     * 
     * Syntax:  strstr(string, substring);
     * 
    */
    char substr[] = "World";
    char *pSubstr = NULL;
    pSubstr = strstr(str, substr);
    printf("%s\n", pSubstr);
     
    /** 
     * String Tokenization
     * 
     * A token is a sequence of characters
     * within a string that is bounded by
     * a delimiter. A delimiter can be 
     * anything but should be unique in the
     * string (e.g. spaces, commas, period).
     * strtok() function is used to tokenize
     * a string.
     * 
     * Syntax:  strtok(string, delimiter);
     * 
    */
    char text[] = "Hello, how are you today? -my name is- Siri";
    const char delimiter[2] = "-";
    char *pToken;

    pToken = strtok(text, delimiter);
    while(pToken != NULL) {
        printf("%s\n", pToken);

        pToken = strtok(NULL, delimiter);
    }
     
    /** 
     * Sting Analysis
     * 
     * These functions requires character
     * as argument and return a nonzero 
     * value of type int that converts to
     * true or false.
     * 
     * Function     Test for
     * islower()    Lowercase letter
     * isupper()    Uppercase letter
     * isalpha()    Upercase or lowercase letter
     * isalnum()    Uppercase or lowercase letter or digit
     * iscntrl()    Control character
     * isprint()    Any printing character including space
     * isgraph()    Any printing character excluding space
     * isdigit()    Decimal digit 0-9
     * isxdigit()   Hexadecimal digit 0-F
     * isblank()    Blank characters
     * isspace()    Whitespace characters
     * ispuntt()    Printing character for which isspace() and isalnum() == false
     * 
    */

    return 0;
}
