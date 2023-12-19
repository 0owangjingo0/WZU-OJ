#include <stdio.h>

int fun(int n);

int main(void)
{
    int m, n;
    
    scanf("%d", &m);
    
    while (m >= 1)
    {
        scanf("%d", &n);
        printf("%d\n", fun(n));
        
        m--;
    }

    return 0;
}

int fun(int n)
{
    int a = 1;

    for (int i=1; i < n; i++)
    {
        a = (a + 1) * 2;
    }

    return a;
}