/**
 * pay-calc.c
 * Author:  Mark Robrigado
 * Date:    01 December 2022
 * Description: Calculates weekly pay including gross pay, taxes, and net pay.
 *       
*/

#include<stdio.h>

/**
 * Define the constant values from 
 * the given problem.
 *  
*/
#define WORKHOURS 40
#define BASICPAY 12
#define OTPAY 18
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

/**
 * Calculates the tax from the
 * given Gross pay.
 * 
*/
float calcualteTax(float grossPay) {

    /**
     * If the Gross pay is below $300,
     * tax = gross pay * 0.15.
     * 
    */
    if (grossPay <= 300) {
       return grossPay * TAXRATE_300;
    
    /**
     * If Gross pay is above $300 but below
     * $450, tax = first $300 * 0.15 + the remaining
     * amount * 0.20.
     * 
    */
    } else if (grossPay > 300 && grossPay <= 450) {
        return (300 * TAXRATE_300) + ((grossPay - 300) * TAXRATE_150);

    /**
     * If Gross pay is above 450, 
     * tax = first $300 * 0.15 + next $150 * 0.20 +
     * the remaining amount * 0.25.
     * 
    */
    } else if (grossPay > 450){
        return (300 * TAXRATE_300) + (150 * TAXRATE_150) + ((grossPay - 450) * TAXRATE_REST);
    }

}

int main() {

    // Variable declaration
    int hoursRendered, otHours;
    float grossPay, tax;

    printf("WEEKLY PAY CALCULATOR\n");
    printf("Please enter number of hours worked: ");

    /**
     * Scan user input, if input is not an integer
     * return an error else continue with the computation.
     * 
    */ 
    if (scanf("%d", &hoursRendered) == 1) {

        /**
         * If hours worked is greater than 40, compute the
         * overtime hours then gross pay = work hours * basic pay +
         * overtime hours * overtime pay.
         * 
        */ 
        if (hoursRendered > WORKHOURS) {
            otHours = hoursRendered - WORKHOURS;
            grossPay = (WORKHOURS * BASICPAY) + (otHours * OTPAY);

        // If hours worked is less than 40, no overtime.
        } else {
            grossPay = hoursRendered * BASICPAY;
        }

        // Output Gross pay.
        printf("Gross Pay: $%g\n", grossPay);

        // Compute and output the Tax.
        tax = calcualteTax(grossPay);
        printf("Tax: $%g\n", tax);

        // Output Net Pay, netpay = grosspay - tax.
        printf("Net Pay: $%g\n", grossPay - tax);

    // Output error mesage if input is not an integer.
    } else {
        printf("err: Input error. Please input an integer.");
    }

    return 0;
}
