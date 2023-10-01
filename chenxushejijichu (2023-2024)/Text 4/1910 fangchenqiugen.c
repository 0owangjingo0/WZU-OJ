#include <stdio.h>
#include <math.h>

int main(void)
{   
    double a, b, c;
    double d;
    double x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);
    d = pow(b, 2) - 4*a*c;

    if (d < 0)
    {
        printf("no\n");
    }
    else
    {
        x1 = (-b + sqrt(d))/2/a;
        x2 = (-b - sqrt(d))/2/a;
        if (d == 0)
        {
            printf("%.2lf\n", x1);
        }
        else
        {
            printf("%.2lf %.2lf\n", x1, x2);
        }
    }

    return 0;
}