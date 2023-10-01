#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int lst[1000] = {0, 1, 0};
        int a = 0;
        int b = 1;
        int p = 3;

        printf("1\n");

        for (int i=2; i <= n; i++)
        {
            lst[p] = 0;
            p++;
            for (int j=1; j < i; j++)
            {
                lst[p] = lst[a] + lst[b];
                printf("%d ", lst[p]);
                p++;
                a++;
                b++;
            }
            lst[p] = lst[a] + lst[b];
            printf("%d\n", lst[p]);
            p++;
            a += 2;
            b += 2;
            lst[p] = 0;
            p++;
        }
        putchar('\n');

    }

    return 0;
}