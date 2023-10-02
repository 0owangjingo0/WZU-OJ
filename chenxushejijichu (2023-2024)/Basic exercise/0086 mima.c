#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n-- >= 1)
    {
        int ch;
        int l = 0;
        int b = 0;
        int s = 0;
        int num = 0;
        int f = 0;
        while ((ch=getchar()) != '\n')
        {
            l += 1;
            if (!(b) && (ch >= 'A' && ch <= 'Z'))
            {
                b = 1;
            }
            else if (!(s) && (ch >= 'a' && ch <= 'z'))
            {
                s = 1;
            }
            else if (!(num) && (ch >= '0' && ch <= '9'))
            {
                num = 1;
            }
            else if (
                !(f)
                &&
                (
                (ch == '~')
                ||
                (ch == '!')
                ||
                (ch == '@')
                ||
                (ch == '#')
                ||
                (ch == '$')
                ||
                (ch == '%')
                ||
                (ch == '^')
                )
            )
            {
                f = 1;
            }
        }

        if ((l >= 8) && (l <= 16) && (b+s+num+f >= 3))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}