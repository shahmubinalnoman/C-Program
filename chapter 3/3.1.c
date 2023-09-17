/* Write a program to determine and print the sum of
following harmonic series for given value of n:
1+1/2+1/3+.......+1/n.
The value of n should be given interactively through the terminal.*/


#include<stdio.h>

void main()
{
    int n;
    float sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum=1+1/2+1/3+1/4+1/5+1/n;
    printf("Sum is %f",sum);
    return 0;
}

