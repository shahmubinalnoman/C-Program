#include <stdio.h>
int main()
{
    int i, n, a1[100], a2[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements on array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a1[i]);
    }
    printf("Print the first array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a1[i]);
    }
    printf("Copying the first array elements to array 2:\n");
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    printf("Print the second array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a2[i]);
    }
    return 0;
}