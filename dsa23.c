#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    printf("Enter the order of the first matrix : ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the order of the second matrix : ");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2)
    {
        int a2[r2][c2];
        int a1[r1][c1];
        int a3[r1][c2];
        printf("Enter matrix 1 : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &a1[i][j]);
            }
        }

        printf("Enter matrix 2 : \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &a2[i][j]);
            }
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                a3[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    a3[i][j] += a1[i][k] * a2[k][j];
                }
            }
        }
        printf("The resultant matrix is : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", a3[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Two matrices having entered number of rows and columns cannot be multiplied!!!");
}