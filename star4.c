#include <stdio.h>
int main()
{
    char i, j, n, count = 'A';

    +printf("Enter the character of your choice: ");

    scanf("%c", &n);

    for (i = 'A'; i <= n; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c", count);
            ++count;
        }
        printf("\n");
    }
    return 0;
}