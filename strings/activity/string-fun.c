/**
 * string-fun.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Do-it-yourself strlen(), strcat(), and strcmp() functions.
 *       
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX_VALUE 256

int strlength(char str[]);
void strconcat(char str1[], char str2[]);
bool strcompare(char str1[], char str2[]);

int main() {

    // Variable declaration
    int choice = 0;
    char input[sizeof(choice)];
    char str1[MAX_VALUE];
    char str2[MAX_VALUE];

    // Loop until choice is 1, 2, 3.
    do {
        // Clear the screen.
        system("cls");

        // Output menu to user.
        printf("1: Count String\n2: Concatenate String\n3: Compare String\n");

        // Prompt the user to input a number.
        printf("Please input a number: ");
        fgets(input, sizeof(choice), stdin);
        sscanf(input, "%d", &choice);

        // Switch operation based on user choice.
        switch (choice) {
            /*  
             *  Prompt the user to input a string and 
             *  call strlength() to get string length.
            */ 
            case 1: 
                printf("Please input string: ");
                fgets(str1, sizeof(str1), stdin);
                printf("The length of the string is %d\n", strlength(str1));
                break;

            /*
             *  Prompt the user to input two strings 
             *  and call strconcat() to output the
             *  concatenated string.
            */
            case 2:
                printf("Please input string 1: ");
                fgets(str1, sizeof(str1), stdin);
                printf("Please input string 2: ");
                fgets(str2, sizeof(str2), stdin);
                strconcat(str1, str2);
                break;

            /*
             *  Prompt the user to input two strings
             *  and call strcompare() to compare the
             *  strings. 
            */
            case 3:
                printf("Please input string 1: ");
                fgets(str1, sizeof(str1), stdin);
                printf("Please input string 2: ");
                fgets(str2, sizeof(str2), stdin);
                printf("String 1 and String 2 are %s\n", 
                        strcompare(str1, str2) == 1 ? "equal." : "not equal.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
    } while (choice < 1 || choice > 3);

    return 0;
}
/*
 *  Returns the length of a given string.
*/
int strlength(char str[]) {

    int length = 0;

    // Loop through the string until null terminator.
    while (str[length] != '\0'){
        length++;
    }
    
    return length;
}

/*
 *  Takes two string and returns the 
 *  concatenated string.
*/
void strconcat(char str1[], char str2[]) {
    
    char result[MAX_VALUE];
    int i, j;

    // Copy the first string to the result string.
    for (i = 0; str1[i] != '\n'; i++) {
        result[i] = str1[i];
    }

    // Start end of the first string then copy the second string.
    for (j = 0; str2[j] != '\n'; j++) {
        result[i + j] = str2[j];
    }
    
    printf("Concatenated string is \"%s\"", result);
}

/*
 *  Takes two strings and returns true
 *  if both strings are equal.
*/
bool strcompare(char str1[], char str2[]) {

    // Compare the strings per letter.
    for (size_t i = 0; i < strlength(str1); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}
