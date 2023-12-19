#include <stdio.h>

int jiechen(int n);

int main(void)
{
    int n;
    int s = 0;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        s += jiechen(n + 1);
    }

    printf("%d\n", s);

    return 0;
}

int jiechen(int n)
{
    int s = 1;

    while (n-- >= 1)
    {
        s = s * (n + 1);
    }

    return s;
}