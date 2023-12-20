#include <stdio.h>

int fun(int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        int count = 0;

        while (n--)
        {
            int temp;
            scanf("%d", &temp);
            count += fun(temp);
        }
        printf("%d\n", count);

        scanf("%d", &n);
    }
    
}

int fun(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n >= 100)
        {
            n -= 100;
            count++;
        }
        else if (n >= 50)
        {
            n -= 50;
            count++;
        }
        else if (n >= 10)
        {
            n -= 10;
            count++;
        }
        else if (n >= 5)
        {
            n -= 5;
            count++;
        }
        else if (n >= 2)
        {
            n -= 2;
            count++;
        }
        else if (n >= 1)
        {
            n -= 1;
            count++;
        }
    }

    return count;
}