#include <stdio.h>

int main()
{
    int n;
    char ch;

    scanf("%d\n", &n);

    while (n >= 1)
    {
        char lst[100];
        int i = 0;

        while ((lst[i]=getchar()) != '\n')
        {
            i++;
        }

        i--;    
        int j = 0;
        while (j <= i-1)
        {
            putchar(lst[j]);
            putchar(' ');
            j++;
        }
        putchar(lst[j]);
        putchar(' ');
        putchar('\n');
        
        n--;
    }

    return 0;
}