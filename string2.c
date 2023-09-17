#include <stdio.h>
#include <string.h>
int main()
{
    int str1[100], str2[100];
    printf("Enter the string that you want to enter: ");
    gets(str1);
    strcpy(str2, str1);
    printf("After copying the string from str1 to str2: %s",str2);
    return 0;
}