#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0)
    {
        int flag = 0;

        if (a > 0 && b > 0)
        {
            int x, y;
            for (x = 0; x <= a/2; x++)
            {
                y = a - x;
                if (x * y == b)
                {
                    printf("Yes\n");
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("No\n");
            }
        }
        else if (b < 0)
        {
            int x, y;
            for (x = 1; x < -b; x++)
            {
                y = b / x;

                if (x * y == b && x + y == a)
                {
                    printf("Yes\n");
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("No\n");
            }
        }
        else if (a < 0 && b > 0)
        {
            int x, y;
            for (x = 1; x * x < b; x++)
            {
                y = -(b / x);

                if (-x * y == b && -x + y == a)
                {
                    printf("Yes\n");
                    flag = 1;
                    break;
                }
            }
            if (!flag)
            {
                printf("No\n");
            }
        }
        scanf("%d %d", &a, &b);
    }
    return 0;
}