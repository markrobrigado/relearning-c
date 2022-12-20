/*
 * item.c
 * Author:  Mark Robrigado
 * Date:    20 December 2022
 * Description: Add item record and output item added.   
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LENGTH 64

struct Item {                           // Define struct Item
    char *name;
    int quantity;
    float price;
    float amount;
};

void readitem(struct Item *pItem);      // Function prototype
void printitem(struct Item *pItem);

int main() {

    struct Item item;                   // Declare Item struct item
    struct Item *pItem = NULL;          // Initialize pointer
    pItem = &item;                      // Assign pointer to struct

    readitem(pItem);                    // Call readitem() and pass pointer
    printitem(pItem);                   // Call printitem() and pass pointer
        
    return 0;
}

/*
 * Reads user input and store to Item struct.
*/
void readitem(struct Item *pItem) {

    char input[MAX_LENGTH];

    printf("Please input item details\n");

    printf("Item name: ");                              // Prompt user input for
    fgets(input, sizeof(input), stdin);                 // item name
    input[strcspn(input, "\n")] = 0;
    pItem->name = (char*)malloc(sizeof(input) + 1);
    strcpy(pItem->name, input);

    printf("Item quantity: ");                          // Prompt user input for
    fgets(input, sizeof(input), stdin);                 // item quantity
    sscanf(input, "%d", &pItem->quantity);

    printf("Item price: ");                             // Prompt user input for
    fgets(input, sizeof(input), stdin);                 // item price
    sscanf(input, "%f", &pItem->price);

    printf("Item amount: ");                            // Prompt user input for
    fgets(input, sizeof(input), stdin);                 // item amount
    sscanf(input, "%f", &pItem->amount);

    pItem->amount = (float)pItem->quantity * pItem->price;
}

/*
 * Display Item struct.
*/
void printitem(struct Item *pItem) {

    printf("\nItem details\n");
    printf("Item name: %s\n", pItem->name);
    printf("Item quantity: %d\n", pItem->quantity);
    printf("Item price: $%g\n", pItem->price);
    printf("Item amount: $%g\n", pItem->amount);
}
