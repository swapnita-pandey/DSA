#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &r, &c);
    int a[r][c], isLower = 1;
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
            if (i < j && a[i][j] != 0)
            {
                isLower = 0;
            }
        }
    }

    if (isLower == 1)
    {
        printf("Lower Triangular Matrix");
    }
    else
    {
        printf("Not a Lower Triangular Matrix");
    }
}