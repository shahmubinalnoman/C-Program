#include <stdio.h>
int main()
{

    int a[6], i;

    printf("Enter the elements in array: ");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are ");
    for (i = 1; i <= 5; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\n");
    return 0;
}