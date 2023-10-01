#include <stdio.h>

int main(void)
{
    int m;
    int lst[100];
    int p = 0;
    scanf("%d", &m);
        
    while(m >= 1)
    {
        scanf("%d", &lst[p]);
        p++;

        m--;
    }

    int x;
    int flag = 0;
    scanf("%d", &x);

    for (int i=0; i < p; i++)
    {
        if (lst[i] == x)
        {
            printf("%d\n", i);
            flag = 1;
            break;
        }
    }

    if (!flag)
    {
        printf("%d\n", -1);
    }

    return 0;
}