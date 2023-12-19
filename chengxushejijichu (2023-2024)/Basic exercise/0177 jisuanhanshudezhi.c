#include <stdio.h>

double fun(double x, double y);

int main(void)
{
    double x, y;

    while (scanf("%lf %lf", &x, &y) != EOF)
    {    
        printf("%.2lf\n", fun(x, y));
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