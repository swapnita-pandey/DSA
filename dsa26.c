#include <stdio.h>

int main()
{
    int r, c, row = 0, col = 0;
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the matrix : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            row = row + a[i][j];
        }
        printf("Sum of the %d row is : %d\n", i + 1, row);
        row = 0;
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            col = col + a[j][i];
        }
        printf("Sum of the %d column is : %d\n", i + 1, col);
        col = 0;
    }
}