#include <stdio.h>
#include <math.h>
int main()
{
    int i, n1, n2, rem;
    printf("Enter the numbers that you want to: ");
    scanf("%d%d", &n1, &n2);
  
    printf("The perfect square numbers are:\n");
    for (i = n1; i <= n2; i++)
    {
        rem = sqrt(i);
         if (rem * rem == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}