/**
 * more-string-fun.c
 * Author:  Mark Robrigado
 * Date:    14 December 2022
 * Description: Reverse a string and string sorting functions.
 *       
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_VALUE 256

void strreverse(char str[]);
void strsort(int size, char strArr[][MAX_VALUE]);

int main() {

    // Variable declaration
    int choice = 0, number = 0;
    char input[sizeof(choice)];
    char str[MAX_VALUE];
    char strArr[100][MAX_VALUE];

    // Loop until choice is 1 or 2.
    do {
        // Clear the screen.
        system("cls");

        // Output menu to user.
        printf("1: Reverse String\n2: Sort String\n");

        // Prompt the user to input a number.
        printf("Please input a number: ");
        fgets(input, sizeof(choice), stdin);
        sscanf(input, "%d", &choice);

        // Switch operation based on user choice.
        switch (choice) {
            /*  
             *  Prompt the user to input a string and 
             *  call strreverse() to reverse the string.
            */ 
            case 1: 
                printf("Please input string: ");
                fgets(str, sizeof(str), stdin);
                str[strlen(str) - 1] = '\0';
                strreverse(str);
                break;

            /*
             *  Prompt the user to input n strings 
             *  and call strsort() to output the
             *  sorted string.
            */
            case 2:
                printf("How many strings would you like to sort? ");
                fgets(input, sizeof(number), stdin);
                sscanf(input, "%d", &number);

                // Input n amount of strings and stor to strArr[].
                printf("Please input %d strings:\n", number);
                for (size_t i = 0; i < number; i++) {
                    fgets(strArr[i], sizeof(strArr), stdin);
                }
                strsort(number, strArr);
                
                break;
            default:
                printf("Invalid choice.");
                getch();
                break;
        }
    } while (choice < 1 || choice > 3);

    return 0;
}

/*
 *  Returns a string in reverse order.
*/
void strreverse(char str[]) {

    for (int i = strlen(str); i >= 0; i--) {
        printf("%c", str[i]);
    }
}

/*
 *  Returns array of strings in ascending order.
*/
void strsort(int size, char strArr[][MAX_VALUE]) {

    char temp[MAX_VALUE];

    // Implement bubble sort.
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (strcmp(strArr[j], strArr[j + 1]) > 0) {
                strcpy(temp, strArr[j]);
                strcpy(strArr[j], strArr[j + 1]);
                strcpy(strArr[j + 1], temp);      
            }
        }
    }

    // Output sorted string array.
    printf("\nSorted strings are:\n");
    for (size_t i = 0; i < size; i++) {
        printf("%s", strArr[i]);
    }
}
