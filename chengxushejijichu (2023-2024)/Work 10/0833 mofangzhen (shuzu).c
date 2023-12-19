#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int lst[100][100] = {0};
    int i = 0;
    int j = n / 2;
    int t_i;
    int t_j;

    for (int t=1; t <= n*n; t++)
    {
        if (i < 0)
        {
            i = n - 1;
        }
        else if (i > n-1)
        {
            i = 0;
        }
        if (j > n - 1)
        {
            j = 0;
        }
        if (lst[i][j] != 0)
        {
            lst[t_i+1][t_j] = t;
            t_i = t_i + 1;
            t_j = t_j;
            i = t_i;
            j = t_j;
        }
        else
        {
            lst[i][j] = t;
            t_i = i;
            t_j = j;
        }
        i--;
        j++;
    }

    for (int i=0; i < n; i++)
    {
        for (int j=0; j < n; j++ )
        {
            printf("%d ", lst[i][j]);
        }
        putchar('\n');
    }

    return 0;
}