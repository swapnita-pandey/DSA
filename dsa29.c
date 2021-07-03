#include <stdio.h>

void main()
{
    int n, n1, n2, i, j, k;
    printf("Enter the size of the first array : ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the elements of the first array : ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array : ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the elements of the second array : ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    n = n1 + n2;
    int c[n];
    i = j = k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    if (i == n1)
    {
        for (; k < n; k++)
        {
            c[k] = b[j];
            j++;
        }
    }
    else
    {
        for (; k < n; k++)
        {
            c[k] = a[i];
            i++;
        }
    }

    printf("Merged Array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", c[i]);
    }
}