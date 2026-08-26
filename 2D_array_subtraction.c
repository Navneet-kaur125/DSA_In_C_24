#include <stdio.h>

void subtract(int a[][10], int b[][10], int c[][10], int r, int col)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    subtract(a, b, c, r, col);

    printf("Subtraction of two matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
