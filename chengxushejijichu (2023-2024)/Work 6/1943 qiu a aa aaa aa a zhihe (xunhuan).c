#include <stdio.h>

int main(void)
{
    int m;
    int a, n;
    long long int b = 0;
    long long int s = 0;

    scanf("%d", &m);

    while (m >= 1)
    {   
        a = 0;
        b = 0;
        s = 0;
        scanf("%d %d", &a, &n);

        int i;
        for (i=1; i < n; i++)
        {
            b = b*10 + a;
            s += b;
        }
        b = b*10 + a;
        s += b;
        printf("a+aa+aaa+...=");
        printf("%lld\n", s);

        m--;
    }

    return 0;
}