#include <stdio.h>

int main()
{
    int r, c, diagonal = 0;
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &r, &c);
    if (r == c)
    {
        int a[r][c], principal = 0, secondary = 0;
        printf("Enter the matrix : \n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                scanf("%d", &a[i][j]);
                if (i == j)
                    principal += a[i][j];

                if ((i + j) == (r - 1))
                    secondary += a[i][j];
            }
        }
        printf("Sum of principal diagonal : %d\n", principal);
        printf("Sum of secondary diagonal : %d", secondary);
        /*for (int i = 0; i < r; i++)
        {
            diagonal = diagonal + a[i][i];
        }*/
    }
    else
        printf("Sum of diagonal can't be calculated");
}