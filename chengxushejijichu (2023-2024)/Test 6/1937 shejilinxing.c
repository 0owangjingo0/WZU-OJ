#include <stdio.h>

int main(void)
{
    int n;
    int x, y;
    int flag = 1;

    scanf("%d", &n);
    
    x = n/2;
    y = 1;

    for (int i=1; i <= n; i++)
    {
        for (int a=1; a <= x; a++)
        {
            putchar('-');
        }

        for (int b=1; b <= y; b++)
        {
            putchar('*');
        }

        for (int a=1; a <= x; a++)
        {
            putchar('-');
        }

        if (x == 0)
        {
            flag = 0;
        }
        
        (flag) ? x -= 1 : x += 1;
        (flag) ? y += 2 : y -= 2;
        putchar('\n');
    }   
}