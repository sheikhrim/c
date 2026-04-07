//Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days
#include <stdio.h>
int main() {
    int ndays, y, m, d; // Declare variables for number of days, years, months, and days

    // Prompt user for input number of days and store in 'ndays'

    printf("Input no. of days: ");
    scanf("%d", &ndays);

    // Calculate years, months, and remaining days

    y = (int) ndays/365;
    ndays = ndays-(365*y);
    m = (int)ndays/30;
    d = (int)ndays-(m*30);


    // Print the result

    printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);

    return 0;
}
