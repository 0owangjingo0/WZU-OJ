#include <stdio.h>

void bobble_sort(double jiazhi[], double fenshu[], int p);

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);

    double jiazhi[100];
    double fenshu[100];
    int p = 0;

    while (n-- >= 1)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);

        jiazhi[p] = b/a;
        fenshu[p] = a;
        p++;
    }
    bobble_sort(jiazhi, fenshu, p);

    double s = 0;
    for (int i=0; i < p; i++)
    {
        for (int j=1; j <= fenshu[i]; j++)
        {
            if (m > 0)
            {
                s += jiazhi[i];
                m--;
            }
            else
            {
                break;
            }
        }

        if (m < 1)
        {
            break;
        }
    }

    printf("%.2lf\n", s);

    return 0;
}

void bobble_sort(double jiazhi[], double fenshu[], int p)
{
    double temp;

    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p-i-1; j++)
        {
            if (jiazhi[j] < jiazhi[j+1])
            {
                temp = jiazhi[j+1];
                jiazhi[j+1] = jiazhi[j];
                jiazhi[j] = temp;

                temp = fenshu[j+1];
                fenshu[j+1] = fenshu[j];
                fenshu[j] = temp;
            }
        }
    }
}