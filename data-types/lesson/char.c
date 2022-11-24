/**
 * char.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Provides information on Char data type.
 *       
 */

#include<stdio.h>

int main(){

    /**
     * Char
     * 
     * Char represent a single character and uses single quotes e.g. 'A'.
     * 
     * Syntax: char varName = 'c';
     * 
     * Escape Characters are special characters that represent actions.
     * It can be represented using escape sequences enclosed in single quotes.
     * 
     * Sequence     Meaning
     * '\a'         Alert (ANSI, C)
     * '\b'         Backspace
     * '\f'         Form feed
     * '\n'         New line
     * '\r'         Carriage return
     * '\t'         Horizontal tab
     * '\v'         Vertical tab
     * '\\'         Backslash (\)
     * '\''         Single quote (')
     * '\"'         Double quote (")
     * '\?'         Question Mark (?)
     * '\0'         Octal
     * '\x'         Hexadecimal
     * 
     */
    
    char sampleChar = 'a';

    printf("This is a sample char   %c\n", sampleChar);
    printf("This is an alert        %c\n", '\a');
    printf("This is a backspace     %c\n", '\b');
    printf("This is a form feed     %c\n", '\f');
    printf("This is a new line      %c", '\n');
    printf("This is a return        %c", '\r');
    printf("This is a horizontal tab%c\n", '\t');
    printf("This is a vertical tab  %c\n", '\v');
    printf("This is a backslash     %c\n", '\\');
    printf("This is a single quote  %c\n", '\'');
    printf("This is a double quote  %c\n", '\"');
    printf("This is a question mark %c\n", '\?');
    printf("This is 10 in octal     %c\n", '\010');
    printf("This is 10 in hex       %c\n", '\x10');
    
    return 0;
}