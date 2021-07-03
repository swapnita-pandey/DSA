#include <stdio.h>
#include <string.h>

void main()
{
    char s1[50], s2[50];
    printf("Enter first string : ");
    scanf("%s", s1);
    printf("Enter second string : ");
    scanf("%s", s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int a[26] = {0};
    int c = 0;
    if (l1 == l2)
    {
        for (int i = 0; i < l1; i++)
        {
            a[s1[i] - 'a']++;
            a[s2[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] == 0)
                c++;
        }
        if (c == 26)
            printf("Anagrams");
        else
            printf("Not Anagrams");
    }
    else
        printf("Not Anagrams");
}