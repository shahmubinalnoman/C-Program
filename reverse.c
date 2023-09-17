#include <stdio.h>
int main()
{

    int n,j;

    printf("Enter the number you want: ");
    scanf("%d", &n);

    while (n > 0)
    {
        j = n % 10;
        printf("%d", j);
        n = n / 10;
    }
    //printf("\n");
    return 0;
}