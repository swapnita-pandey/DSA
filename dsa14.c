#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < 0 && a[i] >= 0)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Array with negative elements in one side : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}