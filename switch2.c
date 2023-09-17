#include <stdio.h>
int main()
{

    int ch, i, n, a, b, f = 1;

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Enter your num: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            printf("%d", i);
        }
        break;

    case 2:
        printf("Enter two numbers: ");
        scanf("%d%d", &a, &b);
        n = a + b;
        printf("Sum is %d", n);
        break;

    case 3:
        printf("Enter your num: ");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            f = f * i;
        }
        printf("Factorial is %d", f);
        break;
    default:
        printf("Invalid user choice");
    }
    return 0;
}