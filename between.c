#include <stdio.h>
int main()
{
    int n1, n2, s = 0;
    printf("Enter the numbers of first and second: ");
    scanf("%d%d", &n1, &n2);
    while (n1 <= n2)
    {
        s = s + n1;
        n1++;
    }
    printf("The sum of the numbers are %d", s);
    return 0;
}