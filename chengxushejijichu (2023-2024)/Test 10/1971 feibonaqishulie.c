#include <stdio.h>

int main()
{
    int n, a, b, c;

    scanf("%d", &n);

    while (n-- >= 1)
    {
        int m;
        scanf("%d", &m);
        a = 0;
        b = 1;

        for (int i = 2; i <= m; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }

        printf("%d\n", b);
    }
    
    return 0;
}
