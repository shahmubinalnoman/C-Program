#include <stdio.h>
int main()
{

    int a[2][2], i, j;
    printf("Enter the array elements: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array elements in Matrix Form:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    return 0;
}