#include <stdio.h>
int main()
{
    long int num, n, lastDigit;
    int arr[10], i;
    printf("Enter the numbers do your to: ");
    scanf("%ld", &num);
    n = num;
    for (i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    while (n != 0)
    {
        lastDigit = n % 10;
        arr[lastDigit]++;
        n = n / 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            printf("The frequency of %d is %d\n", i, arr[i]);
    }

    return 0;
}