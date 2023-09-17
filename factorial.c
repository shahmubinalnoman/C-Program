#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the number that you want to convert to factorial: ");
    scanf("%d", &n);

factorial:
    while (n > 0)
    {
        fact = fact * n;
        n--;
        goto factorial;
    }
    printf("The result of factorial number is %d", fact);

    return 0;
}