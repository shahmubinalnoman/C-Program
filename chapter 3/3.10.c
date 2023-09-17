
Here's a simple C program to input the value of days and convert it into years, weeks, and days:

c

#include <stdio.h>

int main() {
    int days, years, weeks, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;

    printf("%d days is equivalent to %d years, %d weeks, and %d days.\n", days, years, weeks, remaining_days);

    return 0;
}

The program prompts the user to enter the number of days, reads it in using scanf, and then performs the necessary calculations to convert the days into years, weeks, and remaining days. It then prints the original number of days and the converted values using printf. The formula used is:

    Number of years = number of days / 365
    Number of weeks = (number of days % 365) / 7
    Remaining number of days = (number of days % 365) % 7

Note that this calculation assumes a year is 365 days long and a week is 7 days long, which is not entirely accurate in real life.
