#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    int value = 0, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        value = value * 10 + 1;
        if (i == n)
            printf("%d", value);
        else
            printf("%d + ", value);
        sum = sum + value;
    }
    printf("The Sum is : %d", sum);
}