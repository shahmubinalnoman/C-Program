#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbers that you want to: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("The number is even number.");
    exit(0);
odd:
    printf("The number is odd number.");

    return 0;
}