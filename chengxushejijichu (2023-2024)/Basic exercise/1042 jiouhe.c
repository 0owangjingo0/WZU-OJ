#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int m;
        int a;
        int j = 0;
        int o = 0;

        scanf("%d", &m);

        while (m-- >= 1)
        {
            scanf("%d", &a);

            if (a % 2 == 0)
            {
                o += a;
            }
            else
            {
                j += a;
            }
        }

        printf("%d %d\n", j, o);
    }

    return 0;
}