#include <stdio.h>
int main()
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    int temp[2][2];

    printf("Matrix 1 before swapping:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2 before swapping:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp[i][j] = matrix1[i][j];
            matrix1[i][j] = matrix2[i][j];
            matrix2[i][j] = temp[i][j];
        }

        printf("\n");
    }

        printf("Matrix 1 after swapping:\n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        printf("Matrix 2 after swapping:\n");
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }

        return 0;
    }