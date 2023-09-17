#include <stdio.h>
struct students
{
    int roll;
    char name[20];
    float marks;
} s[5];
int main()
{
    int n, i;
    printf("Enter the number of students that you want to enter: ");
    scanf("%d", &n);
    printf("Enter students Records:\n\n ");

    for (i = 0; i < n; i++)
    {
        printf("Enter the students sroll: ");
        scanf("%d", &s[i].roll);
        printf("Enter the students sname: ");
        scanf("%s", &s[i].name);
        printf("Enter the students smarks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Students Records:\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Students sroll: %d\n",s[i].roll);
        printf("Students sname: %s\n",s[i].name);
        printf("Students smarks: %f\n",s[i].marks);
    }
    return 0;
}