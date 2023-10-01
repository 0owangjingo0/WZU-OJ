#include <stdio.h>
#include <math.h>

int is_tonggoushu(int a);

int main(void)
{
    for (int i=1; i <= 99; i++)
        {
        if (is_tonggoushu(i))
            {   
                printf("%d ", i);
            }
        }
        putchar('\n');

    return 0;
}

int is_tonggoushu(int a)
{
    int p = pow(a, 2);
    int z1, y1;
    int z2, y2;

    z1 = a/10;
    y1 = a%10;
    z2 = p/10;
    y2 = p%10;

    while (z1 != 0)
    {
        if (y1 != y2)
        {
            return 0;
        }
        y1 = z1%10;
        z1 = z1/10;
        y2 = z2%10;
        z2 = z2/10;
    }

    if (y1 != y2)
        {
            return 0;
        }
    
    return 1;
}