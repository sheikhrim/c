//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
#include <stdio.h>

int main() {
     /*
      Variables to store the width and height of a rectangle in inches
    */
    int width = 10;
    int height = 5;
    int area;           // Variable to store the area of the rectangle
    int perimeter;      /* Variable to store the perimeter of the rectangle */




    /* Calculating the perimeter of the rectangle */
    perimeter = 2 * (height + width);
    printf("Perimeter Of the rectangle = %d inches\n", perimeter);

     /* Calculating the area of the rectangle */
    area = height * width;
    printf("Area Of the rectangle = %d square inches\n", area);

    return 0;
}
