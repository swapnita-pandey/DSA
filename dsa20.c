/*20. Search whether an element is present in an sorted array or not*/

#include <stdio.h>

void main()
{
    int n, e;
    printf("Enter the number to search : ");
    scanf("%d", &e);
    printf("Enter the size: \n");
    scanf("%d", &n);
    int a[n], min;
    printf("Enter the ascendingly sorted array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int index = -1, low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (e == a[mid])
        {
            index = mid;
            break;
        }
        else if (e > a[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (index != -1)
        printf("Yes");
    else
        printf("No");
}