#include <stdio.h>
int main()
{
    int arr[2][3];
    int rows = 2, cols = 3;

    printf("Enter the elements of the 2D array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d",&arr[i] [j]);
        }

    }
    printf("The elements of the 2D array are:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}