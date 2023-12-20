#include <stdio.h>

int main(void)
{
    //freopen("in1.txt", "r", stdin);
    
    int a, b;
    scanf("%d%d", &a, &b);

    while (a != 0 && b != 0)
    {
        int lst[10000] = {0};
        int max = 0;
        while (a--)
        {
            int n;
            scanf("%d", &n);
            lst[n] = 1;
            if (n > max)
            {
                max = n;
            }
        }

        while (b--)
        {
            int n;
            scanf("%d", &n);
            lst[n] = 0;
        }

        int flag = 0;
        for (int i = 0; i <= max; i++)
        {
            if (lst[i] == 1)
            {
                printf("%d ", i);
                flag = 1;
            }
        }

        if (flag)
        {
            printf("\n");
        }
        else
        {
            printf("NULL\n");
        }

        scanf("%d %d", &a, &b);
    }
}