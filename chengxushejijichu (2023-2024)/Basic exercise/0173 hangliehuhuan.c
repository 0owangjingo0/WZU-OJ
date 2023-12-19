#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int a, b;

        int lst[100][100];

        scanf("%d %d", &a, &b);

        for (int i=0; i < a; i++)
        {
            for (int j=0; j < b; j++)
            {   
                int t;
                scanf("%d", &t);
                lst[i][j] = t;
            }
        }

        for (int i=0; i < b; i++)
        {
            for (int j=0; j < a; j++)
            {
                printf("%d ", lst[j][i]);
            }
            putchar('\n');
        }

        putchar('\n');
    }
    
    return 0;
}