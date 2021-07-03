#include <stdio.h>

void main()
{
    int n1, n2, n;
    printf("Enter the size of the two arrays : \n");
    scanf("%d %d", &n1, &n2);
    int a[n1], b[n2];
    printf("Enter the first array : \n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the second array : \n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    n = n1 + n2;
    int c[n];
    int i = 0, j = 0, k = 0;
    printf("Intersection\n");
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else
        {
            printf("%d ", b[j++]);
            i++;
        }
    }

    i = j = k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else if (a[i] > b[j])
            c[k++] = b[j++];
        else
        {
            c[k++] = a[i++];
            j++;
            n--;
        }
    }
    if (i == n1)
    {
        for (; k < n; k++)
            c[k] = b[j++];
    }
    else
    {
        for (; k < n; k++)
            c[k] = a[i++];
    }
    printf("\nUnion\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", c[i]);
    }
}