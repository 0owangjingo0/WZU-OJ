#include <stdio.h>

int main(void)
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        int lst[6];
        int p = 0;

        int z = a / 10;
        int y = a % 10;

        while (z != 0)
        {
            lst[p] = y;
            p++;
            y = z % 10;
            z = z / 10;
        }
        lst[p] = y;
        p++;

        for (int i=0; i < p; i++)
        {
            printf("%d", lst[i]);
        }
        printf(" %d\n", p);
    }

    return 0;
}