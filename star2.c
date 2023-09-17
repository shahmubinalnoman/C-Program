#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter your choice of number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            //   if (i == 1 || i == n || j == 1 || j == n)

            printf("%d", i);

            // else

            //   printf(" ");
        }
        printf("\n");
    }
    return 0;
}