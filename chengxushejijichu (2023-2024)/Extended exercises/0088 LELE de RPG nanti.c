#include <stdio.h>
#include <math.h>

int main(void)
{
    long long int lst[100] = {0};
    lst[1] = 3;
    lst[2] = 6;
    lst[3] = 6;
    int p = 3;

    int n;
    while (scanf("%d", &n) != EOF)
    {
        while (n > p)
        {
            p++;
            lst[p] = 3 * pow(2, p - 1) - lst[p - 1];
        }
        printf("%lld\n", lst[n]);
    }

    return 0;
}