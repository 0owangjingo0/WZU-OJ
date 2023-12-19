#include <stdio.h>

int intpow(int a, int b);

int main(void)
{
    int num[5] = {1, 0, 0, 0, 0};

    while (num[0] < 10)
    {
        int n = num[0] * 10000 + num[1] * 1000 + num[2] * 100 + num[3] * 10 + num[4];
        int m = intpow(num[0], 5) + intpow(num[1], 5) + intpow(num[2], 5) + intpow(num[3], 5) + intpow(num[4], 5);
        if (n == m)
        {
            printf("%d\n", n);
        }
        num[4]++;
        for (int i = 4; i > 0; i--)
        {
            if (num[i] == 10)
            {
                num[i] = 0;
                num[i - 1]++;
            }
        }
    }
    return 0;
}

int intpow(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}