#include <stdio.h>
int main()
{
    long long a[10010];
    a[1] = 2;
    a[2] = 7;
    for (int i = 3; i < 10010; i++)
    {
        a[i] = a[i - 1] + 4 * (i - 1) + 1;
    }
    int t;
    scanf("%d", &t);
    int n;
    while (t--)
    {
        scanf("%d", &n);
        printf("%lld\n", a[n]);
    }
    return 0;
}