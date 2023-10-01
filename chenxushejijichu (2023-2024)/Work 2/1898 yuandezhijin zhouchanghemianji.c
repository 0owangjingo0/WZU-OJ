#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main(void)
{
    double r;
    double d, c, s;

    scanf("%lf", &r);
    d = 2 * r;
    c = d * PI;
    s = PI * pow(r, 2);
    printf("%.2lf %.2lf %.2lf\n", d, c, s);

    return 0;
}