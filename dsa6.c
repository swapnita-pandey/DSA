#include <stdio.h>

int main()
{
    int n, e = 0, o = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("even ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    printf("\nodd ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    }
}