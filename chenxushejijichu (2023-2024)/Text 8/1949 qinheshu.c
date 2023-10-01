#include  <stdio.h>

int sum_yinshu(int a);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n >= 1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        if (
            (sum_yinshu(a) == b)
            &&
            (sum_yinshu(b) == a)            
            )
            {
                printf("YES\n");
            }
        else
        {
            printf("NO\n");
        }

        n--;
    }

    return 0;
}

int sum_yinshu(int a)
{
    int s = 0;

    for (int i=1; i < a; i++)
    {
        if (a % i == 0)
        {
            s += i;
        }
    }

    return s;
}