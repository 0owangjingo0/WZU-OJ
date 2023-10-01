#include <stdio.h>
#include <math.h>

int is_RTsanjiao(int a, int b, int c);


int main(void)
{
    int t;
    scanf("%d", &t);

    for (int i=1; i <= t; i++)
    {
        printf("case#%d\n", i);

        int n;
        int a = 1;
        int b = 1;
        int s = 0;
        scanf("%d", &n);

        for (int n1=2; n1 <= n; n1++)
        {
            for (a=1; a < n1; a++)
            {
                for (b=1; b < a; b++)
                {
                    if (is_RTsanjiao(a, b, n1))
                    {
                        s++;
                    }
                }
            }
        }

        printf("%d\n", s);
    
    }


    return 0;
}

int is_RTsanjiao(int a, int b, int c)
{
    if (
        (a + b > c)
        &&
        (a + c > b)
        &&
        (b + c > a)
        &&
        (pow(a, 2)+pow(b, 2) == pow(c, 2))
    )
    {
        return 1;
    }

    return 0;
}