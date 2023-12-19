#include <stdio.h>

long long hanoi(int n);

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", hanoi(n));
    }
    return 0;
}

long long hanoi(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return 3 * hanoi(n - 1) + 2;
    }
}