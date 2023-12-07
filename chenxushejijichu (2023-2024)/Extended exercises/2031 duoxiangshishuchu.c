#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int num;

    for (int i = n; i >= 0; i--)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            continue;
        }
        int flag = (num > 0) ? 1 : -1;
        num *= flag;
        if (flag == -1)
        {
            putchar('-');
        }
        else if (i != n)
        {
            putchar('+');
        }
        if (i == 0)
        {
            printf("%d", num);
        }
        else if (i == 1)
        {
            if (num != 1)
            {
                printf("%d", num);
            }
            putchar('x');
        }
        else
        {
            if (num != 1)
            {
                printf("%d", num);
                printf("x^%d", i);
            }
            else
            {
                printf("x^%d", i);
            }
        }
    }
    putchar('\n');
    return 0;
}