#include <stdio.h>

void main()
{
    int n, positive = 0, negative = 0, zero = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }
    printf("positive : %d\nnegative : %d\nzero : %d", positive, negative, zero);
}