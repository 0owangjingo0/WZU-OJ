#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {   
        printf("The new string is: ");
        int k = 0;
        while (k < 2)
        {
            char ch;
            ch = getchar();
            if (ch == '\n')
            {
                k++;
                continue;
            }
            putchar(ch);
        }
        putchar('\n');

    }
    return 0;
}