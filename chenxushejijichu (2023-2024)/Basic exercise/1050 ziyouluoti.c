#include <stdio.h>

int main()
{    
    double h, n;
    double m;
    
    scanf("%lf %lf", &h, &n);
    m = h;
    
    for (int i = 2; i <= n; i++)
    {
        m += h;
        h = h/2.0;
    }    
    printf("%.6lf\n", m);
    return 0;
}