#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {
        int m;
        int s = 1;
        scanf("%d", &m);

        for (int i=1; i <= m; i++)
        {
            s *= i;
        }
        printf("%d\n", s);

        n--;
    }

    return 0;
}