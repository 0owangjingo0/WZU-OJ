#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            printf("These numbers are equal.\n");
        }
        else
        {
            (a > b) ? printf("%d\n", a) : printf("%d\n", b);
        }
    }

    return 0;
}