#include <stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[10][10], int b[10][10], int rows, int cols)
{
    int sum[10][10];
    int i, j;

    printf("\nAddition of Matrices:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int aa[10][10], int b[10][10], int rows, int cols)
{
    int result[10][10];
    int i, j, k;

    printf("\nMultiplication of Matrices:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            result[i][j] = 0;

            for(k = 0; k < cols; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    printf("\nTranspose of First Matrix:\n");

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;
    int first[10][10], second[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter elements of First Matrix:\n");
    inputMatrix(first, rows, cols);

    printf("\nEnter elements of Second Matrix:\n");
    inputMatrix(second, rows, cols);

    printf("\nFirst Matrix:\n");
    displayMatrix(first, rows, cols);

    printf("\nSecond Matrix:\n");
    displayMatrix(second, rows, cols);

    addMatrix(first, second, rows, cols);

    multiplyMatrix(first, second, rows, cols);

    transposeMatrix(first, rows, cols);

    return 0;
}