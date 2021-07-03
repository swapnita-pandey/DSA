#include <stdio.h>

void main()
{
    int num, n, c = 0;
    printf("Enter the number to be searched : ");
    scanf("%d", &num);
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (num == a[i])
            c++;
    }
    printf("%d", c);
}