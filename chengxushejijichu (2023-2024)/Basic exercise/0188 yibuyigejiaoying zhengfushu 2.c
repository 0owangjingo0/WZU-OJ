#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m-- >= 1)
    {
        int n;
        scanf("%d", &n);

        if (n > 0)
        {
            printf("%d\n", 1);
        }
        else if (n < 0)
        {
            printf("%d\n", -1);
        }
        else
        {
            printf("%d\n", 0);
        }
    }

    return 0;
}