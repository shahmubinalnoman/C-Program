#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, s;
    printf("Enter the number that you want to enter: ");
    scanf("%d", &n);
    // s = n * (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }

    printf("The first %d natural numbers sum is %d", n, s);

    return 0;
}