#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &r, &c);
    int a[r][c], transpose[c][r];
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
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix : \n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}