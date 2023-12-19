#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n-- >= 1)
    {
        for (int i=0; i < 2; i++)
        {
            putchar(getchar());
            putchar(' ');
        }
        putchar(getchar());
        putchar('\n');
        getchar();

    }

    return 0;
}