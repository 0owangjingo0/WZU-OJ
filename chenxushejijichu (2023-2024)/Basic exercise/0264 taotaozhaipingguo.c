#include <stdio.h>

int main(void)
{
    int lst[10];

    for (int i=0; i < 10; i++)
    {
        scanf("%d", &lst[i]);
    }

    int h;
    scanf("%d", &h);
    h += 30;

    int cnt = 0;

    for (int i=0; i < 10; i++)
    {
        if (lst[i] <= h)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}