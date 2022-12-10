/**
 * weather-program.c
 * Author:  Mark Robrigado
 * Date:    09 December 2022
 * Description: A simple weather program using multi-dimensional arrays.
 *       
*/

#include<stdio.h>

#define YEARS 5
#define MONTHS 12

int main() {
    
    // Initialize rainfall data.
    float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    float cummulativeYearly, commulativeMonthly, cummulativeRainfall;

    printf("YEAR\tRAINFALL (inches)\n");

    // Iterate per year.
    for (int i = 0; i < YEARS; i++) {

        // Reset yearly rainfall value every loop.
        cummulativeYearly = 0;

        // Iterate per month and add all rainfall values.
        for (int j = 0; j < MONTHS; j++) {
            cummulativeYearly += rain[i][j];
        }

        // Output rainfall amount per year.
        printf("201%d\t%g\n", i, cummulativeYearly);

        // Add all yearly rainfall values.
        cummulativeRainfall += cummulativeYearly;
    }
    
    // Ouput yearly rainfall average.
    printf("\nThe yearly average is %g inches\n\n", cummulativeRainfall/YEARS);

    // Output monthly averages.
    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan\tFeb\tMar\tApr\tMay\tJun\tJul\tAug\tSep\tOct\tNov\tDec\n");

    // Iterate per month.
    for (int i = 0; i < MONTHS; i++) {

        // Reset yearly rainfall value every loop.
        commulativeMonthly = 0;

        // Iterate per month and add all rainfall values.
        for (int j = 0; j < YEARS; j ++) {
            commulativeMonthly += rain[j][i];
        }

        // Ouput monthly rainfall average.
        printf("%g\t", commulativeMonthly/YEARS);
    }

    return 0;
}
