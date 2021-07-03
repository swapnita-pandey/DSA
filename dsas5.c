#include <stdio.h>
#include <string.h>

void main()
{
    char a[100];
    int count[26] = {0};

    printf("Enter the array : ");
    gets(a);
    int n = strlen(a);
    for (int i = 0; i <= n; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            count[a[i] - 'A']++;
        else if (a[i] >= 'a' && a[i] <= 'z')
            count[a[i] - 'a']++;
    }
    char c;
    for (int i = 0, c = 'A'; i < 26; i++, c++)
    {
        if (count[i] > 0)
            printf("Frequency of %c in the array : %d\n", c, count[i]);
    }
}