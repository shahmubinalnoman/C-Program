#include <stdio.h>
int main()
{
    int i, j, a[2][2], b[2][2], temp[2][2];
    printf("Enter the first matrix elements: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix elements: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Before swapping: \n");

    printf("First matrix elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second matrix elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("After swapping: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            temp[i][j] = a[i][j];
            a[i][j] = b[i][j];
            b[i][j] = temp[i][j];
        }
    }
    printf("\n");
    printf("First matrix elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second matrix elements: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)

        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}