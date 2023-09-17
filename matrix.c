#include <stdio.h>
int main()
{
    int i, j, mat[2][2];
    printf("Enter the matrix elements: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix elements are: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }
    return 0;
}