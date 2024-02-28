#include  <stdio.h>

int sum_D(int a);

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i=10; i <= n; i++)
    {
        if (i % sum_D(i) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int sum_D(int x)
{
    int s = 0;
    int z, y;

    z = x / 10;
    y = x % 10;
    s += y;

    while (z != 0)
    {
        y = z % 10;
        z = z / 10;
        s += y;
    }

    return s;
}