#include <stdio.h>

double total(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%.3lf\n", total(n));
}

double total(int n)
{
    double s = 0;

    for (int i=1; i <= n; i++)
    {
        int m = 0;

        for (int j=1; j <= i; j++)
        {
            m += j;
        }

        s += 1.0/m;
    }

    return s;
}