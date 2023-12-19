#include <stdio.h>

#define MOD 10000

int main()
{
    //freopen("in1.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int num = 0, sum = 0, mul = 1;
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (ch >= '0' && ch <= '9')
        {
            num = (num * 10 + (ch - '0')) % MOD;
        } else
        {
            mul = (mul * num) % MOD;
            if (ch == '+')
            {
                sum = (sum + mul) % MOD;
                mul = 1;
            }
            num = 0;
        }
    }
    sum = (sum + mul * num) % MOD;
    printf("%d\n", sum);
    return 0;
}