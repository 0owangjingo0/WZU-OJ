#include <stdio.h>

int main(void)
{
    int a, b;

    for (a=1; a <= 9; a++)
    {
        for (b=1; b <= 9; b++)
        {
            printf("%d*%d=%-3d", a, b, a*b);
        }
        putchar('\n');
    }

    return 0;
}   