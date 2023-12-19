#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int h, r;
        double v;
        int m;
        scanf("%d %d", &h, &r);

        v =  PI * pow(r, 2) * h;

        if (20000 / v == (int)(20000 / v))
        {
            m = (int)(20000 / v);
        }
        else
        {
            m = (int)(20000 / v) + 1;
        }

        printf("%d\n", m);
    }
}