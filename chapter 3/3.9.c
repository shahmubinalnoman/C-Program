//Here's a simple C program to input an integer between 0 and 128 and print its ASCII character:

//c

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 0 and 128: ");
    scanf("%d", &num);

    if(num >= 0 && num <= 128) {
        printf("The ASCII character for %d is %c.\n", num, (char)num);
    }
    else {
        printf("Error: Number must be between 0 and 128.\n");
    }

    return 0;
}

//The program prompts the user to enter a number between 0 and 128, reads it in using scanf, and then checks if it is within the valid range using an if statement. If the number is valid, the program casts it to a char type and prints the corresponding ASCII character using printf. If the number is not valid, the program prints an error message.
