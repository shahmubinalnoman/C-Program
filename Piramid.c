#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the number of your choice: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}