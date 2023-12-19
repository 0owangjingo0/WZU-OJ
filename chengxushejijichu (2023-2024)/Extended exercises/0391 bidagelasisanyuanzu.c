#include <stdio.h>

int is_sanjiao(int a, int b, int c);

int main(void)
{
    for (int i = 1; i <= 500; i++)
    {
        for (int j = i; j <= 500; j++)
        {
            for (int k = j; k <= 500; k++)
            {
                
                if (
                    i * i + j * j == k * k
                    && is_sanjiao(i, j, k)
                    )
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    
    return 0;
}

int is_sanjiao(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}