#include <stdio.h>
int main()
{

    int n, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)

        printf("The is a perfect number", sum);
    else
        printf("This is not a perfect number:");
    printf("\n");
    return 0;
}