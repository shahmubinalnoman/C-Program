#include <stdio.h>
int main()
{

    int i, a[5];

    printf("Enter the array elements: ");

    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array reverse elements are:");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}