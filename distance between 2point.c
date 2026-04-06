//Write a C program to calculate the distance between two points
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distance; // Declare variables for coordinates and distance

    // Prompt user for coordinates (x1, y1) and store them

    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input y1: ");
    scanf("%f", &y1);

    // Prompt user for coordinates (x2, y2) and store them

    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input y2: ");
    scanf("%f", &y2);

    // Calculate squared distance between points

    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    // Calculate and print the distance between the points

    printf("Distance between the said points: %.4f", sqrt(distance));
    printf("\n");

    return 0;
}
