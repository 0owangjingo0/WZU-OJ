#include <stdio.h>

int fun(int a);

int main(void)
{
    int m, n;
    int s;

    scanf("%d %d", &m, &n);

    while ((m != 0) && (n != 0))
    {
        s = n - m + 1;

        for (; m <= n; m++)
        {
            if (!fun(m))
            {
                s -= 1;
            }
        }

        printf("%d\n", s);
        scanf("%d %d", &m, &n);
    }    


    return 0;
}

int fun(int a)
{
    int lst[1000];
    int p = 0;
    int x, y;

    x = a / 10;
    y = a % 10;

    while (x >= 1)
    {
        lst[p] = y;
        y = x % 10;
        x /= 10;
        
        p++;
    }
    lst[p] = y;

    int flag = 0;
    for (; p >= 0; p--)
    {   
        int c = lst[p];

        if (c == 4)
        {
            return 0;
        }
        else if (c == 6)
        {
            flag = 1;
        }
        else if ((c == 2) && (flag))
        {
            return 0;
        }
        else if (flag)
        {
            flag = 0;
        }

    }

    return 1;
}