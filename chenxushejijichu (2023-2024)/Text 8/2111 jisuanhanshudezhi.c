#include <stdio.h>

double fun(double x, double y);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {   
        double x, y;
        scanf("%lf %lf", &x, &y);
        printf("%.2lf\n", fun(x, y));

        n--;
    }

    return 0;
}

double fun(double x, double y)
{
    if (x < 0)
    {
        return x + y;
    }
    else
    {
        return fun(x-1, x+y) + x/y;
    }
}