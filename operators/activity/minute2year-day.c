/**
 * minute2year-day.c
 * Author:  Mark Robrigado
 * Date:    29 November 2022
 * Description: Converts the given minutes to years and days.
 *       
 */

#include<stdio.h>

/**
 * Calculate minutes to days.
 */
double calculateDays(long long minutes) {
    return (minutes/60.0)/24.0;
}

int main() {

    // Variable declaration
    long long minutes = 0;
    double days = 0;
    double years = 0;
    
    /**
     * Assigns number of minutes based on user input.
     */
    printf("Please enter number of minutes: ");
    scanf("%lld", &minutes);
    fflush(stdout);

    days = calculateDays(minutes);
    years = days/365; // Divide days/365 to calculate minutes to years.

    // Outpute minutes to days and years.
    printf("%lld minutes is approximately %g day/s or %g year/s", minutes, days, years);

    return 0;
}
