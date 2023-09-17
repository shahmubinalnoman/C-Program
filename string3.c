#include <stdio.h>
int add(int a, int b)

{
    int c;
    c = a + b;
    return c;
}

int add(int a, int b);
int main()
{
    int a, b, s;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    s = add(a, b);
    printf("Sum is =%d", s);
}
