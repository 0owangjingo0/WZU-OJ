#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m-- >= 1)
    {
        char lst[12];
        scanf("%s", &lst);
        putchar('6');

        for (int i=6; i <= 10; i++)
        {
            putchar(lst[i]);
        }
        putchar('\n');

    }

    return 0;
}