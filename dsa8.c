#include <stdio.h>

int reverse(int x)
{
    int rev = 0;
    for (int i = x; i > 0; i = i / 10)
    {
        rev = rev * 10 + i % 10;
    }
    return rev;
}

void main()
{
    int n, c = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == reverse(a[i]))
            c++;
    }
    printf("%d", c);
}