#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    while (a-- >= 1)
    {
        int n;
        int s = 0;
        int b;
        scanf("%d", &n);

        while (n-- >= 1)
        {
            scanf("%d", &b);
            s += b;
        }

        printf("%d\n", s);
    }

    return 0;
}