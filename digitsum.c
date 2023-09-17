#include <stdio.h>
int main()
{
    int n, j, sum = 0;
    printf("Enter the numbers: ");
    scanf("%d", &n);

    while (n > 0)
    {
        j = n % 10; /* code */
        sum = sum + j;
        n = n / 10;
    }
    printf("The sum of digits is %d", sum);

    return 0;
}