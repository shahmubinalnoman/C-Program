#include <stdio.h>
int main()
{

    int n, c, r, sum = 0;
    printf("Enter your number you want to:");
    scanf("%d", &n);

    c = n;

    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == c)
    {
        printf("This is a armstrong Number");
    }

    else
    {
        printf("Not a armstrong Number");
    }

    return 0;
}