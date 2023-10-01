#include <stdio.h>
#include <math.h>

int jiechen(int n);

int main(void)
{
    double x;

    while (scanf("%lf", &x) != EOF)
    {
        int i = 2;
        double a;
        double s = 1;
        s += x;
        a = pow(x, i)/jiechen(i);

        while (a >= 0.000000001)
        {
            s += a;
            i++;
            a = pow(x, i)/jiechen(i);
        }

        printf("%.8lf\n", s);
    }

    return 0;
}

int jiechen(int n)
{
    int s = 1;

    for (int i=2; i <= n; i++)
    {
        s *= i;
    }
    return s;
}