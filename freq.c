#include <stdio.h>

int frequency(int x)
{
    long y[1000], i = 0, frq[10] = {0}, l = 1;
    while (x / l != NULL)
    {
        y[i] = (x / l) % 10;
        l = l * 10;
        // printf("%d\n",y[i]);
        i++;
    }

    for (int j = 0; j <= i; j++)
    {
        for (int k = 0; k <= 9; k++)
        {
            if (y[j] == k)
            {
                frq[k]++;
            }
        }
    }

    for (int k = 0; k <= 9; k++)
    {
        printf("Frequency of %d = %d\n\n", k, frq[k]);
    }
    return 0;
}

int main()
{
    int n;

    printf("Input any number(max 9 digit): ");
    scanf("%d", &n);
    printf("\n\n\n");

    frequency(n);

    return 0;
}