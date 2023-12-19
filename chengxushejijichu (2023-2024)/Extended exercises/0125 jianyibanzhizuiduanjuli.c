#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int m;
        scanf("%d", &m);

        int lst[550];
        int p = 0;

        while (m--)
        {
            scanf("%d", &lst[p++]);
        }

        int d_min = 0;
        int d = 0;

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < p; j++)
            {
                if (i == j)
                {
                    continue;
                }
                d += (lst[i] > lst[j]) ? lst[i] - lst[j] : lst[j] - lst[i];
            }

            if (d < d_min || i == 0)
            {
                d_min = d;
            }
            d = 0;
        }

        printf("%d\n", d_min);
    }
    return 0;
}