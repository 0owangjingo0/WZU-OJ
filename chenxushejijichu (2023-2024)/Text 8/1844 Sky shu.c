#include  <stdio.h>

int sum_D_to_H(int x);
int sum_D_to_T(int x);
int sum_D(int x);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {
        int a;
        scanf("%d", &a);
        
        if (
            (sum_D(a) == sum_D_to_H(a))
            &&
            (sum_D(a) == sum_D_to_T(a))            
            )
            {
                printf("%d is a Sky Number.\n", a);
            }
        else
        {
            printf("%d is not a Sky Number.\n", a);
        }

        n--;
    }

    return 0;
}

int sum_D_to_H(int x)
{
    int s = 0;
    int z, y;

    z = x / 16;
    y = x % 16;
    s += y;

    while (z != 0)
    {
        y = z % 16;
        z = z / 16;
        s += y;
    }

    return s;
}

int sum_D_to_T(int x)
{
    int s = 0;
    int z, y;

    z = x / 12;
    y = x % 12;
    s += y;

    while (z != 0)
    {
        y = z % 12;
        z = z / 12;
        s += y;
    }

    return s;
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