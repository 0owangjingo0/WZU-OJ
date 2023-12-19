#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0)
    {
        int t = 1;

        while (b--)
        {
            t *= a;
            t %= 1000;
        }

        printf("%d\n", t % 1000);
        scanf("%d %d", &a, &b);
    }

    return 0;
}