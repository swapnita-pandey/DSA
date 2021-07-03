/*10. Input a char array and count vowels*/

#include <stdio.h>

int main()
{
    int n, c = 0;
    printf("Enter the size of the character array : ");
    scanf("%d", &n);
    char a[n];
    printf("Enter the array : ");
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ||
            a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            c++;
    }
    printf("%d", c);
}