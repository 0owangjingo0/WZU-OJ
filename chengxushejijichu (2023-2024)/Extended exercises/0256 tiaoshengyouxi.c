#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);

    while (n--)
    {
        int m;
        scanf("%d",&m);
        int lst[100] = {-1};
        int head = 0;
        for (int i = 0; i < m; i++)
        {
            scanf("%d",&lst[i]);
        }

        int count = 0;
        int flag = 0;
        for (int i = 1; i <= 60; i++)
        {
            if (count == lst[head])
            {
                head++;
                flag = 3;
            }
            if (flag != 0)
            {
                flag--;
                continue;
            }
            count++;
        }

        printf("%d\n",count);
    }
}