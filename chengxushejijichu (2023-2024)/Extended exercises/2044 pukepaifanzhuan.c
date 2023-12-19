#include <stdio.h>

int main(void)
{
    int n;
    int count[1001] = {0};
    int ans[1000];
    int p = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j % i == 0)
            {
                count[j] = count[j] == 0 ? 1 : 0;
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (count[i] == 0)
        {
            ans[p++] = i;
        }
    }
    printf("%d\n", p);
    for (int i = 0; i < p; i++)
    {
        printf("%d ", ans[i]);
    }
    putchar('\n');

    return 0;
}