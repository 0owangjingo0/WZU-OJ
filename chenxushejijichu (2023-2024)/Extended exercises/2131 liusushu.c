#include <stdio.h>

int lst[10000001];
int is_prime(int n)
{
    if (n == 1)
    {
        lst[n] = 0;
        return 0;
    }
    if (n == 2)
    {
        lst[n] = 1;
        return 1;
    }
    if (n % 2 == 0)
    {
        lst[n] = 0;
        return 0;
    }
    if (n % 3 == 0)
    {
        lst[n] = 0;
        return 0;
    }
    if (n % 6 != 1 && n % 6 != 5)
    {
        lst[n] = 0;
        return 0;
    }
       

}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int began = (a / 6) + (a % 6 ? 1 : 0);
    int end  = (b / 6) + (b % 6 ? 1 : 0);

    int sum = 0;

}