/**
 * multi-dimensional-array.c
 * Author:  Mark Robrigado
 * Date:    08 December 2022
 * Description: Provides information on multi-dimensional array.
 *       
*/

#include<stdio.h>

int main() {

    /**
     * Multi-dimensional Array
     * 
     * Multi-dimensional array allow arrays of any dimension 
     * to be defined. Two dimensional (2D) array is the most 
     * common type. 2D array can be visualized as rows and 
     * columns or a matrix.
     * 
     * Syntax:  type varName[size1][size2]...[sizeN]; 
     * 
    */

    // Initialize 2d array.
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Output 2d-array index.
    printf("%d", array[2][2]);

    return 0;
}
