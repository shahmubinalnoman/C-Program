/* Write a program to do the following:
a) Declare x and y as integer variables and z as a short integer variable.
b) Assign two 6 digit numbers to x and y.
c) Assign the sum of x and y to z.
d) Output the value of x, y and z.
Comment on the output.*/

#include <stdio.h>

int main() {
    int x, y;
    short int z;

    x = 123456;
    y = 234567;
    z = x + y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);

    return 0;
}


/*Ouput:--
Enter Two Values
123456
234567
Values Are:--
x= 123456 y= 234567 z= 30343
*/
