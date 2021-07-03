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
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("Reversed array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}