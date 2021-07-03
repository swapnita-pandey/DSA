#include <stdio.h>
#include <math.h>

void main()
{
    int x, n;
    printf("Input the value of x : ");
    scanf("%d", &x);
    printf("Input number of terms : ");
    scanf("%d", &n);
    float sum = 0.0, value;
    printf("The values of the series :");
    for (int i = 1; i <= n; i++)
    {
        value = (-1) * pow((-1), i) * pow(x, (2 * i) - 1);
        printf("%0.0f\n", value);
        sum = sum + value;
    }
    printf("The sum : %0.0f", sum);
}