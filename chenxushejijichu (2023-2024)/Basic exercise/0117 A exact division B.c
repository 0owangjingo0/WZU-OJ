#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m-- >= 1)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        (a % b == 0) ? printf("YES\n") : printf("NO\n");

    }

    return 0;
}