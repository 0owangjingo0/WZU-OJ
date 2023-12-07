#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    while (n--)
    {
        int s = 0;
        int m;
        scanf("%d", &m);

        for (int i = 1; i <= m; i++)
        {
            s += (1 + i) * i / 2;
        }
        printf("%d\n", s);
    }

    return 0;
}