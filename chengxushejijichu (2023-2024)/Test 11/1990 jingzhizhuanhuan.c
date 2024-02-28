#include <stdio.h>

int int_to_char(int n)
{
    if (n < 10)
        return '0' + n;
    else    
        return 'A' + n - 10;
}

int main(void)
{
    int n, r;

    while (scanf("%d %d", &n, &r) != EOF)
    {
        int flag = 0;
        if (n < 0)
        {
            n = -n;
            flag = 1;
        }
        
        int z = n / r;
        int y = n % r;
        int s[100];
        int p = 0;

        while (z != 0)
        {
            s[p] = int_to_char(y);
            y = z % r;
            z = z / r;
            p++;
        }
        s[p] = int_to_char(y);
        p++;

        if (flag)
            putchar('-');

        for (int i = p - 1; i >= 0; i--)
        {
            printf("%c", s[i]);
        }
        putchar('\n');
    }
    return 0;
}