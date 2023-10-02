#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    while (a != 0)
    {
        int s = 0;
        int b;

        while (a-- >= 1)
        {
            scanf("%d", &b);
            s += b;
        }

        printf("%d\n", s);
        scanf("%d", &a);
    }

    return 0;
}