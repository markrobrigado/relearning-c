/**
 * area-of-rectangle.c
 * Author:  Mark Robrigado
 * Date:    11 November 2022
 * Description: Displays the perimeter and area of a rectangle.
 *       
 */

#include<stdio.h>

/**
 * Calculate the area of the rectangle width * height
 */
double calculateArea(double width, double height) {
    return width * height;
}

/**
 * Calculate the perimeter of the rectangle (width + height)*2
 */
double calculatePerimeter(double width, double height) {
    return (width + height)*2;
}

int main () {

    // Variable decalaration
    double width;
    double height;
    double perimeter;
    double area;

    /**
     * Assign the value of width based on
     * user input. 
     */
    printf("Enter the width of the rectangle: ");
    fflush(stdout);
    scanf("%lf", &width);

    /**
     * Assign the value of height based on
     * user input. 
     */
    printf("Enter the height of the rectangle: ");
    fflush(stdout);
    scanf_s("%lf", &height);

    // Calculate the perimeter and area.
    perimeter = calculatePerimeter(width, height);  
    area = calculateArea(width, height);

    // Output the perimeter and area.
    printf("The perimeter of rectangle is %g\n", perimeter);
    printf("The area of rectangle is %g", area);

    return 0;
}
