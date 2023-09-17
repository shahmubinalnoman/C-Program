/*Here's a C program that reads in a set of numbers and prints the number of positive and negative numbers in the set:

c*/

#include <stdio.h>

int main()
{
    int num, count_positive = 0, count_negative = 0;

    do
    {
        printf("Enter a number (enter 0 to exit): ");
        scanf("%d", &num);

        if (num > 0)
        {
            count_positive++;
        }
        else if (num < 0)
        {
            count_negative++;
        }

    }
    while (num != 0);

    printf("Number of positive numbers: %d\n", count_positive);
    printf("Number of negative numbers: %d\n", count_negative);

    return 0;
}
