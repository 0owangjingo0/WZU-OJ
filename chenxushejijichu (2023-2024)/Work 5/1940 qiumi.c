#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.3lf\n", pow(x, n));

    return 0;
}