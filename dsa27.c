#include <stdio.h>

int main()
{
    int r, c;
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
        int min = a[r][1];
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }
        printf("Smallest element of %d row is : %d\n", i + 1, min);
    }
}