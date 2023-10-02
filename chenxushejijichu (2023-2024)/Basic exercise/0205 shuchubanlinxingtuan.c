#include <stdio.h>

int main(void)
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        for (int i=1; i <= a; i++)
        {
            for (int j=1; j <= 2*i-1; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }

        for (int i=a-1; i >= 1; i--)
        {
            for (int j=1; j <= 2*i-1; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }

        putchar('\n');
    }

    return 0;
}