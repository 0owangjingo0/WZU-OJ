#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1;
    double x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.2lf\n", distance);
    return 0;
}