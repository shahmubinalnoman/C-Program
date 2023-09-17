//Here's a simple C program to print the square of a number:

//c

#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("The square of %d is %d.\n", num, square);

    return 0;
}

//The program prompts the user to enter a number, reads it in using scanf, calculates the square by multiplying the number by itself, and then prints the result using printf.

