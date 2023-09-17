#include <stdio.h>
int main()
{
    char str[100], i, c;
    int count = 0;
    printf("Enter the string: ");
    scanf("%s", &str[i]);

    for (c = 'a'; c <= 'z'; c++)
    {
        count = 0;
        for (int i = 0; str[i] != NULL; i++)
        {
            if (c == str[i])

                count++;
        }
        if (count > 0)
            printf("The %c exits %d times\n", c, count);
    }
}