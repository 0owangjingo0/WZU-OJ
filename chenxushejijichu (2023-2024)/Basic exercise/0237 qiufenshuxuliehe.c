#include <stdio.h>

int main(void)
{
    double z1 = 2;
    double z2 = 3;
    double m1 = 1;
    double m2 = 2;

    int n;
    scanf("%d", &n);
    n -= 2;

    double s = 0;
    s += z1 / m1;
    s += z2 / m2;

    while (n-- >= 1)
    {
        int t;
        s += (z1 + z2) / (m1 + m2);
        t = z1;
        z1 = z2;
        z2 = z2 + t;
        t = m1;
        m1 = m2;
        m2 = m2 + t;
    }

    printf("%.4lf\n", s);
}