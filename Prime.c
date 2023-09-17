#include <stdio.h>
int main()
{

    int i, n, count = 0;
    printf("Enter the number you want to: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("Prime Num");
    }
    else
    {
        printf("Not a Prime Num");
    }

    printf("\n");

    return 0;
}