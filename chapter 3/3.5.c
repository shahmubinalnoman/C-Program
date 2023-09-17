// Write a program to illustrate the use of typedef declaration in a program.

#include <stdio.h>
typedef int number;

int main() {
    number x = 5;
    number y = 10;
    number sum = x + y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("sum = %d\n", sum);

    return 0;
}
