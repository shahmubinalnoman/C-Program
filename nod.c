#include <stdio.h>
int main()
{
    int n, j = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        n = n / 10;
        j++;
    }
    printf("The digit no is %d", j);
    return 0;
}