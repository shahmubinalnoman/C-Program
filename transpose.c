#include <stdio.h>
int main()
{
    int i, j, trans[2][2], mat[2][2];
    printf("Enter the matrix elements: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    printf("Before transpose,the matrix look like:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
           printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("But after transpose, the matrix look like:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}