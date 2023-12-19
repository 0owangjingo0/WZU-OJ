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

        if (m == 1)
        {
            printf("%d\n", 1);
        }
        else if (m == 2)
        {
            printf("%d\n", 1);
        }
        else
        {
            for (int i = 2; i <= m; i++)
            {
                c = a + b;
                a = b;
                b = c;
            }

            printf("%d\n", b);
        }
    }
    
    return 0;
}