#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    getchar();

    while (n-- >= 1)
    {
        double lst[100];
        int i = 0;
        double s = 0L;
        double avr;
        int m;
        double s_n = 0L;

        scanf("%d", &m);
        while (m-- >= 1)
        {
            scanf("%lf", &lst[i]);
            s += lst[i];
            i++;
        }

        avr = s/i;
        for (int j=0; j < i; j++)
        {
            s_n += pow(lst[j]-avr, 2);
        }
        printf("%.3lf %.3lf\n", avr, sqrt(s_n/i));
    }
}