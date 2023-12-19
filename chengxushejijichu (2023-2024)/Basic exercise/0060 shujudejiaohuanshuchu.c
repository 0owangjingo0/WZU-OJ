#include <stdio.h>

int main()
{    
    int n;
    scanf("%d", &n);

    while (n != 0)
    {   
        int a;
        int lst[100];
        int min = 100;
        int min_i = 0;

        for (int i=0; i < n; i++)
        {
            scanf("%d", &a);
            lst[i] = a;

            if (a < min)
            {
                min = a;
                min_i = i;
            }
        }

        lst[min_i] = lst[0];
        lst[0] = min;

        int i;
        for (i=0; i < n-1; i++)
        {
            printf("%d ", lst[i]);
        }
        printf("%d\n", lst[i]);

        scanf("%d", &n);
    }

    return 0;
}