#include <stdio.h>

void fun(double a, int *f, int *l, int *z);

int main(void)
{
    int n;
    int f, l, z;
    double a;

    f = 0;
    l = 0;
    z = 0;

    scanf("%d", &n);
    getchar();

    while(n != 0)
    {   
        char ch;

        while ((n >= 1) && (ch != '\n'))
        {
            scanf("%lf", &a);
            fun(a, &f, &l, &z);
            ch = getchar();

            n--;
        }
        printf("%d %d %d\n", f, l, z);
        f = 0;
        l = 0;
        z = 0;

        scanf("%d", &n);
        ch = getchar();
        
    }

    return 0;
}

void fun(double a, int *f, int *l, int *z)
{
    if (a == 0)
    {
        *l += 1;
    }
    else if (a > 0)
    {
        *z += 1;
    }
    else
    {
        *f += 1;
    }
}