#include <stdio.h>

int fun(int n, int * count)
{
    *count = *count + 1;
    if (n == 1)
    {
        return 0;
    }
    
    for (int i=1; i <= n/2; i++)
    {
        fun(i, count);
    }
    return 0;
}

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m--)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        fun(n, &count);
        printf("%d\n", count);
    }
    return 0;
}