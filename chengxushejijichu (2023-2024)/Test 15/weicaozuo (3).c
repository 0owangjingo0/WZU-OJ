#include <stdio.h>

int main(void)
{
    int x, p, n;

    while (scanf("%d%d%d", &x, &p, &n) != EOF)
    {
        x = x >> (p + 1 - n);
        int mask = (1 << n) - 1;
        x = x & mask;
        printf("%d\n", x);
    }
    return 0;
}