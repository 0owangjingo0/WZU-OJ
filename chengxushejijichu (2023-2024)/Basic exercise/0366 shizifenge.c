#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    while (n != 0)
    {
        int lst[5];
        int p = 0;
        
        int z = n;
        int y;

        while (z != 0)
        {
            y = z % 10;
            z = z / 10;
            lst[p] = y;
            p++;
        }

        int i;
        for (i=p-1; i > 0; i--)
        {
            printf("%d---", lst[i]);
        }
        printf("%d\n", lst[i]);
        scanf("%d", &n);

    }

    return 0;
}