#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int a;
        scanf("%d", &a);

        (a % 2 == 0) ? printf("0\n") : printf("1\n");
    }

    return 0;
}