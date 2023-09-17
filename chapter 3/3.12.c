Here's a simple C program to input the amount value and break it into the smallest possible Indian currency notes:

c

#include <stdio.h>

int main() {
    int amount, notes_of_2000, notes_of_500, notes_of_200, notes_of_100, notes_of_50, notes_of_20, notes_of_10, notes_of_5, notes_of_2, notes_of_1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes_of_2000 = amount / 2000;
    amount = amount % 2000;

    notes_of_500 = amount / 500;
    amount = amount % 500;

    notes_of_200 = amount / 200;
    amount = amount % 200;

    notes_of_100 = amount / 100;
    amount = amount % 100;

    notes_of_50 = amount / 50;
    amount = amount % 50;

    notes_of_20 = amount / 20;
    amount = amount % 20;

    notes_of_10 = amount / 10;
    amount = amount % 10;

    notes_of_5 = amount / 5;
    amount = amount % 5;

    notes_of_2 = amount / 2;
    amount = amount % 2;

    notes_of_1 = amount;

    printf("Notes of 2000: %d\n", notes_of_2000);
    printf("Notes of 500: %d\n", notes_of_500);
    printf("Notes of 200: %d\n", notes_of_200);
    printf("Notes of 100: %d\n", notes_of_100);
    printf("Notes of 50: %d\n", notes_of_50);
    printf("Notes of 20: %d\n", notes_of_20);
    printf("Notes of 10: %d\n", notes_of_10);
    printf("Notes of 5: %d\n", notes_of_5);
    printf("Notes of 2: %d\n", notes_of_2);
    printf("Notes of 1: %d\n", notes_of_1);

    return 0;
}

The program prompts the user to enter the amount, reads it in using scanf, and then calculates the number of notes of each denomination using integer division and modulo operator. Finally, it prints the number of notes of each denomination using printf. Note that this calculation assumes the currency notes of denominations of 2000, 500, 200, 100, 50, 20, 10, 5, 2, and 1.
