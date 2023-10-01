#include <stdio.h>
#include <math.h>

double juli(double x1, double y1, double x2, double y2);

int main(void)
{
    int m;
    double lst[30][2];
    int p = 0;
    
    scanf("%d", &m);
    
    while (m >= 1)
    {
        scanf("%lf %lf", &lst[p][0], &lst[p][1]);
        p++;        
        m--;
    }

    double max = 0;
    double s;
    for (int i=0; i < p; i++)
    {
        for (int j=i+1; j < p; j++)
        {
            s = juli(lst[i][0], lst[i][1], lst[j][0], lst[j][1]);
            if (s > max)
            {
                max = s;
            }
        }
    }
    printf("%.4lf\n", max);

    return 0;
}

double juli(double x1, double y1, double x2, double y2)
{
    double s;
    s = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    return s;
}