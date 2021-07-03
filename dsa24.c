#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &r, &c);
    int a[r][c], isUpper = 1;
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
            if (i > j && a[i][j] != 0)
            {
                isUpper = 0;
            }
        }
    }

    if (isUpper == 1)
    {
        printf("Upper Triangular Matrix");
    }
    else
    {
        printf("Not an Upper Triangular Matrix");
    }
}