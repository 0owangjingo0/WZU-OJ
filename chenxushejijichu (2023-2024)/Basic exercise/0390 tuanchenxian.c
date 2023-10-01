#include <stdio.h>

void shuchu(int a);

int main()
{
    int n;
    int a;

    scanf("%d", &n);

    for (int i=1; i <= n; i++)
    {
        scanf("%d", &a);
        shuchu(a);
    }

    return 0;
}

void shuchu(int a)
{
    int n = 1;
    int b = 1;
    int c = 0;

    while (n <= a)
    {
        for (int i=1; i <= b; i++)
        {
            putchar('*');
        }
        for (int i=1; i <= a; i++)
        {
            putchar('-');
        }
        for (int i=1; i <= a; i++)
        {
            putchar('*');
        }
        for (int i=1; i <= c; i++)
        {
            putchar('-');
        }
        putchar('\n');
        b++;
        a--;
        c++;
    }
    n++;
}