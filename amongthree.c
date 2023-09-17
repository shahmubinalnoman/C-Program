#include <stdio.h>
int main()
{
    int a, b, c, n, min;
    printf("Enter Three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);

    printf("The smallest number is %d",min);
    return 0;
}