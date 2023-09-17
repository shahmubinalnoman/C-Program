#include <stdio.h>

int natural(int n)
{
    if (n <= 10)
    {

        printf("%d", n);
        natural(n + 1);
    }
}

int main()
{
    int n = 1;

    natural(n);

    return 0;
}