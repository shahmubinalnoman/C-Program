//Sure! Here's a C program that will take an integer input from the user and print its multiplication table up to 10:

//perl

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}

/*Explanation:

    The program first declares an integer variable num.
    It then prompts the user to enter an integer using the printf() function and reads in the input using the scanf() function.
    The program then uses a for loop to print the multiplication table of num up to 10. For each iteration of the loop, it prints the value of num multiplied by the current value of i, which ranges from 1 to 10.

Example output:

sql

Enter an integer: 5
Multiplication table of 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50

*/
