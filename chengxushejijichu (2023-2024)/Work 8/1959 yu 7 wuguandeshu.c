#include <stdio.h>
#include <math.h>

int is_no_7(int a);

int main(void)
{
    int a;
    int p_s = 0;

    scanf("%d", &a);

    for (int i=1; i <= a; i++)
    {
        if (is_no_7(i))
        {
            p_s += pow(i, 2);
        }
    }
    printf("%d\n", p_s);

    return 0;
}

int is_no_7(int a)
{
    if (a % 7 == 0)
    {
        return 0;
    }
    else
    {
        int z, y;

        z = a / 10;
        y = a % 10;
        if (y == 7)
        {
            return 0;
        }

        while (z != 0)
        {
            y = z % 10;
            z = z / 10;
            if (y == 7)
            {
                return 0;
            }
        }
    }

    return 1;
}