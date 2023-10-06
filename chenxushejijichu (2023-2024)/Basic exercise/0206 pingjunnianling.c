#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        double s = 0;
        int a;

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a);
            s += a;
        }

        printf("%.2lf\n", s / n);
    }

    return 0;
}