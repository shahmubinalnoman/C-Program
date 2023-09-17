#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    printf("The sum of the harmonic series up to %d is %f", n, sum);
    return 0;
}
