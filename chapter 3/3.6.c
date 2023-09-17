// Write a program to illustrate the use of symbolic constants in a real
//life application.


#include<stdio.h>
#define PIE 3.14
void main()
{
    float Area;
    int Rad;

    printf("Enter Radius\n");
    scanf("%d",&Rad);
    Area=PIE*Rad*Rad;
    printf("Area of Circle is:--\n");
    printf("%f",Area);

    Area=PIE*Rad*Rad;

    /*Display
    Area

    END
    START

    Declare Symbolic
    constant PIE to
    3.14
    */

    getch();
}
