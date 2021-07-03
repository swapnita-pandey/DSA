#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int small = a[0], large = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < small)
            small = a[i];
        if (a[i] > large)
            large = a[i];
    }
    printf("largest element : %d\n", large);
    printf("smallest element : %d\n", small);
}