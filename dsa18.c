#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n], min;
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        if (i != min)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}