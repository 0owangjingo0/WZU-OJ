#include <stdio.h>

int main(void)
{
    int lst[20][20];
    
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int x = 0;
        int y = 0;

        int dx = 1;
        int dy = 0;

        int bx = n - 1;
        int by = n - 1;
        int tx = 0;
        int ty = 0;

        for (int i = 1; i <= n * n; i++)
        {
            if (x == bx && dx == 1)
            {
                dx = 0;
                dy = 1;
                ty++;
            }
            else if (y == by && dy == 1)
            {
                dx = -1;
                dy = 0;
                bx--;
            }
            else if (x == tx && dx == -1)
            {
                dx = 0;
                dy = -1;
                by--;
            }
            else if (y == ty && dy == -1)
            {
                dx = 1;
                dy = 0;
                tx++;
            }

            lst[y][x] = i;
            x += dx;
            y += dy;

        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                printf("%4d", lst[i][j]);
            }
            printf("%4d\n", lst[i][n - 1]);
        }
    }

    return 0;
}