#include <stdio.h>

double fun(int x);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {   
        int x;
        scanf("%d", &x);
        printf("%.3lf\n", 1000 + fun(x));

        n--;
    }

    return 0;
}

double fun(int x)
{
    if (x <= 10000)
    {
        return x * 0.05;
    }
    else if ((10000 < x) && (x <= 50000))
    {
        return 0.075 * x;
    }
    else if ((50000 < x) && (x <= 200000))
    {
        return 0.085 * x;
    }
    else
    {
        return 0.1 * x;
    }
}