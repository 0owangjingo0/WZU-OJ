#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0)
    {
        char ans[100][5] = {0};
        int p = 0;

        for (int i = 0; i < 100; i++)
        {
            if ((a * 100 + i) % b == 0)
            {
                ans[p][0] = i / 10 + '0';
                ans[p][1] = i % 10 + '0';
                ans[p][2] = '\0';
                p++;
            }
        }

        for (int i = 0; i < p - 1; i++)
        {
            printf("%s ", ans[i]);
        }
        printf("%s\n", ans[p - 1]);
        scanf("%d %d", &a, &b);
    }
}