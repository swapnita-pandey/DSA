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
        sum = sum + a[i];
    }
    printf("%d", sum);
}