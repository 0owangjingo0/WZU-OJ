#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);

    long long int temp;
    long long int max = 0;
    long long int umax = 0;
    int a, b;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%lld", &temp);
            if ((temp > umax) || (-temp > umax))
            {
                max = temp;
                umax = (temp > 0) ? temp : -temp;
                a = i;
                b = j;
            }
        }
    }
    
    printf("%d %d %lld\n", a, b, max);

    return 0;
}