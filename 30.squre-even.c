//Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>
int main() {
    int x, i;                          // Declare variables for user input and loop counter
    printf("Input an integer: ");
    scanf("%d", &x);                  // Prompt user for an integer

    printf("List of square of each one of the even values from 1 to a %d :\n", x);

    for(i = 2; i <= x; i++) {        // Loop through numbers from 2 to x
        if((i%2) == 0) {            // Check if the number is even
            printf("%d^2 = %d\n", i, i*i);  // Print the square of the even number
        }
    }

    return 0;
}
