#include <stdio.h>
int main()
{
    int arr[100], target, i, n, pos;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position that you want to: ");
    scanf("%d", &pos);
    printf("Enter the element on the target position: ");
    scanf("%d", &target);
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    n++;
    arr[pos]=target;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}