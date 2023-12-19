#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a;
        int b;
        scanf("%d", &a);
        int s = 0;

        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &b);
            if (b < a)
            {
                s += b;
            }
        }
        printf("%d\n", s);
    }
}