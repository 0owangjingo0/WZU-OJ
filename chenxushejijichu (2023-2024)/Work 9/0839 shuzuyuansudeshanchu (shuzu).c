#include <stdio.h>


int main(void)
{
    int n;
    int lst[1000];
    int p = 0;

    scanf("%d", &n);

    while (n >= 1)
    {
        scanf("%d", &lst[p]);
        p++;
        n--;
    }

    int m;
    scanf("%d", &m);

    for (int i=0; i < p; i++)
    {
        if (lst[i] != m)
        {
            printf("%d ", lst[i]);
        }
    }
    putchar('\n');

    return 0;
}