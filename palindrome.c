#include <stdio.h>
int main()
{
    int i, j, k = 0, n;
    printf("Enter the number you want to: ");
    scanf("%d", &n);
    j = n;
    while (n > 0)
    {
        i = n % 10;
        k = i + (k * 10);
        n = n / 10;
    }
    if (j == k)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a palindrome Number");
    }

    return 0;
}