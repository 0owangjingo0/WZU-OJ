#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m-- >= 1)
    {
        int n;        
        int s;
        scanf("%d", &n);

        for (int i=1; i <= n; i++)
        { 
            s = i;
            printf("%d ", i);
            for (int j=n; j >= 2+i-1; j--)
            {
                s += j;
                printf("%d ", s);
            }
            putchar('\n');
        }
    }

    return 0;
}