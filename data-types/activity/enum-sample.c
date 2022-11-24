/**
 * area-of-rectangle.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Simple program demonstrating enums.
 *       
 */

#include <stdio.h>

int main() {

    // Variable declaration declaration
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};
    enum company xeroxCompany = Xerox;
    enum company googleCompany = Google;
    enum company ebayCompany = Ebay;
    
    // Output equivalent value of each enum item.
    printf("The value of Xerox is %d\n", xeroxCompany);
    printf("The value of Google is %d\n", googleCompany);
    printf("The value of Ebay is %d\n", ebayCompany);

    return 0;
}