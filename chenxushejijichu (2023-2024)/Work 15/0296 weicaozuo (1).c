#include <stdio.h>

int main(void)
{
    int n;
    int lst[120];
    int p = 1;

    while (scanf("%d", &n) != EOF)
    {
        int res = (n >> 4) & 15;
        printf("%d\n", res);
    }

    return 0;
}