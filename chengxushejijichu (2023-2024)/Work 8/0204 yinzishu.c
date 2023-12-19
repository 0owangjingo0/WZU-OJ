#include  <stdio.h>

int count_yinzi(int a);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {
        int a, b;
        int max = 0;
        int c_max = 0;

        scanf("%d %d", &a, &b);

        for (int i=a; i <= b; i++)
        {
            int c = count_yinzi(i);
            if (c > c_max)
            {
                max = i;
                c_max = c;
            }
        }
        printf("%d\n", max);

        n--;
    }

    return 0;
}

int count_yinzi(int x)
{
    int c = 0;

    for (int i=1; i <= x; i++)
    {
        if (x % i == 0)
        {
            c++;
        }
    }
    return c;
}