#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        double x1, y1;
        double x2, y2;
        scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

        double tan1 = x1 != 0 ? y1 / x1 : 1e9;
        double tan2 = x2 != 0 ? y2 / x2 : 1e9;

        if (tan1 == tan2)
        {
            if (x1 == x2 && y1 == y2)
            {
                printf("0.00\n");
            }
            else if (x1 == y1 && x2 == y2)
            {
                printf("0.00\n");
            }
            else if (x1 == x2)
            {
                printf("0.00\n");
            }
            else
            {
                printf("180.00\n");
            }
        }
        else if (tan1 * tan2 == -1)
        {
            printf("90.00\n");
        }
        else if (tan1 == -tan2)
        {
            printf("180.00\n");
        }
        else
        {
            double angle = atan(fabs((tan1 - tan2) / (1 + tan1 * tan2)));
            angle = angle * 180 / M_PI;
            printf("%.2lf\n", angle);
        }
    }

    return 0;
}