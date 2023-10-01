#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int m;
        int a;
        int s = 0;
        scanf("%d", &m);

        while (m-- >= 1)
        {
            scanf("%d", &a);
            s += a;
        }

        printf("%d\n", s);
    }

    return 0;
}