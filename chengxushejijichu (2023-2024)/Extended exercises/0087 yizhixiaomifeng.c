#include <stdio.h>

int main(void)
{
    int lst[100] = {0};
    lst[1] = 1;
    lst[2] = 2;
    int p = 2;

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int temp = b - a;

        while (p < temp)
        {
            p++;
            lst[p] = lst[p - 2] + lst[p - 1];
        }
        printf("%d\n", lst[temp]);
    }

    return 0;
}