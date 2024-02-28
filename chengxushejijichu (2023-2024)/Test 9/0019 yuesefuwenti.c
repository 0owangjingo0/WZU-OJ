#include <stdio.h>

int josephus(int n, int m)
{
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        result = (result + m) % i;
    }
    return result + 1;
}

int main()
{
    int n, m;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) 
        {
            break;
        }
        int king = josephus(n, m);
        printf("%d\n", king);
    }
    return 0;
}