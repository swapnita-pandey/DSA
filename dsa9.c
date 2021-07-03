#include <stdio.h>
#include <math.h>

void main()
{
    int n, c = 0;
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array : \n");
    for (int i = 0; i < n; i++)
    {
        double sum = 0.0;
        int dig = 0;
        scanf("%d", &a[i]);
        for (int j = a[i]; j > 0; j = j / 10)
        {
            dig++;
        }
        for (int k = a[i]; k > 0; k /= 10)
        {
            sum = sum + pow((k % 10), dig);
        }
        if (sum == a[i])
            c++;
    }
    printf("%d", c);
}