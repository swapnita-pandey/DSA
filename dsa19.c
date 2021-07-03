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

    int key = a[0], j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}